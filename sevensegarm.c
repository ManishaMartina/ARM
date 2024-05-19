#include<lpc214x.h>
void delay(unsigned int );
unsigned int a []={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int main()
{
PINSEL0=0X00000000;
IODIR0=0XFFFFFFFF;
while(1)
{
	int i;
for(i=0;i<10;i++)
{
IOPIN0=a[i];
delay(500);
}
}
}
void delay(unsigned int dly)
{
unsigned int j;
for(j=0;j<dly;j++)
{
for(j=0;j<100;j++);
}
}