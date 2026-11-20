#include <msp430.h>

#define CAL30   (*(unsigned int *)(0x10DA + 0x08))
#define CAL85   (*(unsigned int *)(0x10DA + 0x0A))

volatile char enviar = 0;

void uart_tx(char c)
{
    while (!(IFG2 & UCA0TXIFG));
    UCA0TXBUF = c;
}

void uart_print(char *s)
{
    while (*s) uart_tx(*s++);
}

void uart_print_int(int n)
{
    char d[6];
    int i = 0;

    if (n < 0)
    {
        uart_tx('-');
        n = -n;
    }

    if (n == 0)
    {
        uart_tx('0');
        return;
    }

    while (n > 0)
    {
        d[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i) uart_tx(d[--i]);
}

int leer_tempC(void)
{
    unsigned int adc;

    ADC10CTL1 = INCH_10;
    ADC10CTL0 = SREF_1 | ADC10SHT_3 | REFON | ADC10ON;
    __delay_cycles(30000);

    ADC10CTL0 |= ENC | ADC10SC;
    while (ADC10CTL1 & ADC10BUSY);
    adc = ADC10MEM;

    ADC10CTL0 &= ~(ENC | ADC10ON | REFON);

    return (int)((((long)adc - (long)CAL30) * 55L) /
                 ((long)CAL85 - (long)CAL30) + 30L);
}

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL  = CALDCO_1MHZ;

    P1SEL  |= BIT1 | BIT2;
    P1SEL2 |= BIT1 | BIT2;
    P1DIR  |= BIT0;
    P1OUT &= ~BIT0;

    UCA0CTL1 |= UCSWRST;
    UCA0CTL1 |= UCSSEL_2;
    UCA0BR0 = 104;
    UCA0BR1 = 0;
    UCA0MCTL = UCBRS0;
    UCA0CTL1 &= ~UCSWRST;
    IE2 |= UCA0RXIE;

    __enable_interrupt();

    uart_print("\r\n2=iniciar  3=detener\r\n");

    while (1)
    {
        if (enviar)
        {
            uart_print("Temp: ");
            uart_print_int(leer_tempC());
            uart_print(" C\r\n");
            __delay_cycles(1000000);
        }
    }
}

#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR(void)
{
    char c = UCA0RXBUF;

    if (c == '2')
    {
        enviar = 1;
        P1OUT |= BIT0;
    }
    else if (c == '3')
    {
        enviar = 0;
        P1OUT &= ~BIT0;
    }
}