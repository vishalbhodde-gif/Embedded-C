#define F_CPU 160000000UL

#Iinclude<avr/io.h>
#include <util/delay.h>

int main(void)
{
    //Configure PB5 as output
    DDRB |= (1 << PB5);

    while(1)
    {
         //LED ON
         PORTB |= (1 << PB5);

         _delay_ms(1000):

         //LED OFF
         PORTB &= ~(1 << PB5);
         
         _delay_ms(1000);

    }
    return0;

}  