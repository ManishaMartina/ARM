#include <LPC214X.H>
// Define LPC2148 Header File

#define led IO1PIN // Define LED to Port1

#define led1 IO1DIR // Define Port1 as output

void delay(int x);

int main()

{

PINSEL2 = 0x00000000; // Define port lines as GPIO

led1 = 0x00010000; // Define P1.16as O/P

led = 0x00000000; // Define P1.16 as zero

while(1) // Loop forever

{

led = 0x00010000; // Turn ON P1.16

delay(2000);

led = 0x00000000; // Turn OFF P1.16

delay(1500);

}

}

void delay(int X)

{

unsigned int K,l;

for(K=0;K<X;K++)
	{

for(l = 0;l < 100;l++);
	}
}

