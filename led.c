#include<LPC214X.h>
void delay(unsigned int);
int main()
{
	PINSEL0=0X00000000;
	IODIR0=0XFFFFFFFF;
	while(1)
	{
		IOSET0=0XFFFFFFFF;
		delay(100);
		IOCLR0=0XFFFFFFFF;
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