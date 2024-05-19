#include<LPC214X.h>
void delay(unsigned int);
int main()
{
	PINSEL0=0X00000000;
	IODIR0=IODIR0|(0x01<<4);
	while(1)
	{
		IOSET0=IOSET0|(0x01<<4);
		delay(100);
		IOCLR0=IOCLR0|(0x01<<4);
	}
}
void delay(unsigned int dly)
{
	unsigned int i,j;
	for(i=0;i<dly;i++)
	{
		for(j=0;j<100;j++);
	}
}