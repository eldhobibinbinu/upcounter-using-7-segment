#include<LPC214X.h>
void delay(unsigned int count);
int main(){

	
IODIR0|=(0x01<<3);
IODIR0|=(0x01<<4);
IODIR0|=(0x01<<5);
IODIR0|=(0x01<<6);
IODIR0|=(0x01<<7);
IODIR0|=(0x01<<8);
IODIR0|=(0x01<<9);
IODIR0|=(0x01<<10);
IODIR0|=(0x01<<11);
IODIR0|=(0x01<<12);
IODIR0|=(0x01<<13);
IODIR0|=(0x01<<14);
	IODIR0|=(0x01<<15);
	IODIR0|=(0x01<<19);

while(1){
	
//00
	IOSET0|=(0x01<<3);
	IOSET0|=(0x01<<4);
	IOSET0|=(0x01<<5);
	IOSET0|=(0x01<<6);
	IOSET0|=(0x01<<7);
	IOSET0|=(0x01<<8);
	
	IOSET0|=(0x01<<10);
	IOSET0|=(0x01<<11);
	IOSET0|=(0x01<<12);
	IOSET0|=(0x01<<14);
	IOSET0|=(0x01<<15);
	IOSET0|=(0x01<<13);
	
  delay(200000);
	
  IOCLR0 |=(0x01<<3);
	IOCLR0 |=(0x01<<4);

	IOCLR0 |=(0x01<<5);
	IOCLR0 |=(0x01<<6);
	IOCLR0 |=(0x01<<7);
	IOCLR0 |=(0x01<<8);
	IOCLR0 |=(0x01<<10);
	IOCLR0 |=(0x01<<11);
	IOCLR0 |=(0x01<<12);
	IOCLR0 |=(0x01<<13);
	IOCLR0 |=(0x01<<14);
	IOCLR0 |=(0x01<<15);
	//01
	IOSET0|=(0x01<<3);
	IOSET0|=(0x01<<4);
	IOSET0|=(0x01<<5);
	IOSET0|=(0x01<<6);
	IOSET0|=(0x01<<7);
	IOSET0|=(0x01<<8);
	

	IOSET0|=(0x01<<11);
	IOSET0|=(0x01<<12);

	
  delay(200000);
	 IOCLR0 |=(0x01<<3);
	IOCLR0 |=(0x01<<4);

	IOCLR0 |=(0x01<<5);
	IOCLR0 |=(0x01<<6);
	IOCLR0 |=(0x01<<7);
	IOCLR0 |=(0x01<<8);
	
	IOCLR0 |=(0x01<<11);
	IOCLR0 |=(0x01<<12);
	
	//10


	IOSET0|=(0x01<<4);
	IOSET0|=(0x01<<5);

	IOSET0|=(0x01<<10);
	IOSET0|=(0x01<<11);
	IOSET0|=(0x01<<12);
	IOSET0|=(0x01<<14);
	IOSET0|=(0x01<<15);
	IOSET0|=(0x01<<13);
	
  delay(200000);

	IOCLR0 |=(0x01<<5);
	IOCLR0 |=(0x01<<4);

	IOCLR0 |=(0x01<<10);
	IOCLR0 |=(0x01<<11);
	IOCLR0 |=(0x01<<12);
	IOCLR0 |=(0x01<<13);
	IOCLR0 |=(0x01<<14);
	IOCLR0 |=(0x01<<15);
	//11

	IOSET0|=(0x01<<4);
	IOSET0|=(0x01<<5);

	
	IOSET0|=(0x01<<11);
	IOSET0|=(0x01<<12);
	
	
  delay(200000);

	IOCLR0 |=(0x01<<5);
	IOCLR0 |=(0x01<<4);
	
	IOCLR0 |=(0x01<<11);
	IOCLR0 |=(0x01<<12);

	}
	
}
	
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}