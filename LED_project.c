#include<pic.h>
void delay(unsigned int x);
void main()
{
	TRISB=0X00;
while(1)
{
PORTB = 0xFF;
delay(65000);
PORTB =0x00;
delay (65000);


}


}
void delay(unsigned int x)
{
while(x--);


}


	