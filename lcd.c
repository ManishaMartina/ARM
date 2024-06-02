#include<lpc214x.h>
void lcdcmd(char com);
void lcddat(char dat);
void delay(void );
int main()
{
PINSEL2=0x00000000;
IODIR0=0xFFFFFFFF;
IODIR1=IODIR1|(0x01<<16);
IODIR1=IODIR1|(0x01<<17);
IODIR1=IODIR1|(0x01<<18);
PINSEL1=0X00000000;
while(1)
{
lcdcmd(0x38);
delay();
lcdcmd(0x01);
delay();
lcdcmd(0x06);
delay();
lcdcmd(0x0c);
delay();
lcdcmd(0x80);
delay();

lcddat('l');
delay();
lcddat('i');
delay();
lcddat('v');
delay();
lcddat('e');
delay();
}
}

void lcdcmd(char com)
{
IOPIN0=com;
IOCLR1=IOCLR1|(0x01<<16);  
IOCLR1=IOCLR1|(0x01<<17);
IOSET1=IOSET1|(0x01<<18);
	delay();
	IOCLR1=IOCLR1|(0x01<<18);
	
}
void lcddat(char dat)
{
IOPIN0=dat;
IOSET1=IOSET1|(0x01<<16);  
IOCLR1=IOCLR1|(0x01<<17);
IOSET1=IOSET1|(0x01<<18);
	delay();
	IOCLR1=IOCLR1|(0x01<<18);
	
}	
void delay()
{
unsigned int i,j;
for(i=0;i<1000;i++)
	{
		for(j=0;j<100;j++);
	
}
}
