#include <lpc214x.h>
void delay(unsigned int);
int main()
{
PINSEL0=0x00000000;
IODIR0=IODIR0|(0x01<<4);
IODIR0=IODIR0|(0x01<<5);
IODIR0=IODIR0|(0x01<<6);
IODIR0=IODIR0|(0x01<<7);
while(1)
{	IOCLR0=IOCLR0|(0x01<<4)|(0x01<<5)|(0x01<<6)|(0x01<<7);
	IOSET0=IOSET0|(0x01<<4);
	delay(50000);
	IOCLR0=IOCLR0|(0x01<<4)|(0x01<<6)|(0x01<<7);
	IOSET0=IOSET0|(0x01<<5);
	delay(50000);
	IOCLR0=IOCLR0|(0x01<<4)|(0x01<<5)|(0x01<<7);
	IOSET0=IOSET0|(0x01<<6);
	delay(50000);
	IOCLR0=IOCLR0|(0x01<<4)|(0x01<<6)|(0x01<<5);
	IOSET0=IOSET0|(0x01<<7);
	delay(50000);
}
}
void delay(unsigned int dly)
{
	unsigned int i,j;
	for(i=0;i<dly;i++)
	{
		for(j=0;j<200;j++);
	}
}