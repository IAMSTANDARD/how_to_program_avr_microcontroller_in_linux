#include<avr/io.h>
#define F_CPU 8000000UL
#include<util/delay.h>
int main() {
    //unsigned char x = 0;
    DDRB = 0xff; // make PORTB as O/P
		DDRA = 0xff;
		char array[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67,0x5f,0x7c,0x58,0x5e,0x79,0x71};

    while(1) {
				for(int i=0;i<16;i++) {
				PORTB = ~(array[i]);
				_delay_ms(500);
				}



//Binary counter code

				for(int i=0;i<256;i++){
				PORTA = i;
				_delay_ms(100);
				}
				/*
				PORTA = ~(0x00);
				_delay_ms(10000);
				*/


// Blink Code
        /*
        PORTB |= (0xff);
        _delay_ms(100);
        PORTB &= ~(0xff);
        _delay_ms(100);
        */
    }
}
