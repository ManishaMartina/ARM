#include<lpc214x.h>
void delay(unsigned int );
unsigned int a[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
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