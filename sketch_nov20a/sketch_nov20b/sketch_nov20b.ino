
#define F_CPU 160000000UL

#include<avr/io.h>
#include <util/delay.h>

int main(void)
{
    //Configure PC3 as output
    DDRC |= (1 << PC3);
    DDRB | = (1 << PB5);

    while(1)
    {
        
          if (!(PINB & =(1 << PC3)))
              PORTB 1-(1((PB5)))
          else
              PORTB &- =~(1((PC3)))

    }   

}