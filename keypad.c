#include<reg51.h>
/*
sbit p=P3^0;
sbit q=P3^1;
sbit r=P3^2;
sbit s=P3^3;

void delay()
{
    unsigned char i;
    TMOD=0x20; // Ch? d? timer 1, ki?u 1  
    for(i=0;i<2;i++) // G?p dôi th?i gian ch?
    {
        TL1=0x19; // Thi?t l?p th?i gian ch?
        TH1=0x00;
        TR1=1; // B?t timer  
        while(TF1==0); // Ki?m tra c?
        TF1=0;
    }  
    TR1=0; // T?t timer
}

void main()
{  
    while(1)
    {
        p=0; q=1; r=1; s=1;
        delay();
        p=1; q=0; r=1; s=1;  
        delay();
    }  
}
*/
/*
sbit r1 = P2^0;
sbit c1 = P3^0;
sbit r2 = P2^1;
sbit c2 = P3^1;
sbit a = P0^1;

void main()  
{  
    r1 = 0;
    a = 1;

    if (c1 == 0) a = 0xFC;
    if (c2 == 0) a = 0x60;
    if (r1 == 0) a = 0xDA;
    if (r2 == 0) a = 0xF2;
}  
*/
/*
sbit a1 = P2^0;
sbit b1 = P3^0;
sbit LED = P0^1;

void main()  
{  
    a1 = 0;
    
    if (b1 == 0)  
    {  
        LED = 0xFF;  
    }  
} */

sbit R0=P1^0;
sbit R1=P1^1;
sbit R2=P1^2;
sbit R3=P1^3;
sbit C0=P1^4;
sbit C1=P1^5;
sbit C2=P1^6;
void seg(unsigned int);

void main()
{
	R0=R1=R2=R3=1;
	R0=0;
	if(C0==0)
		seg(0xF9);
	
		R0=R1=R2=R3=1;
	R0=0;
	if(C1==0)
		seg(0xA4);
	
		R0=R1=R2=R3=1;
	R0=0;
	if(C2==0)
		seg(0xB0);
	
		R0=R1=R2=R3=1;
	R1=0;
	if(C0==0)
		seg(0x99);
	
		R0=R1=R2=R3=1;
	R1=0;
	if(C1==0)
		seg(0x92);
	
	R0=R1=R2=R3=1;
	R1=0;
	if(C2==0)
		seg(0x82);
	
		R0=R1=R2=R3=1;
	R2=0;
	if(C0==0)
		seg(0xF8);
	
		R0=R1=R2=R3=1;
	R2=0;
	if(C1==0)
		seg(0x80);
	
		R0=R1=R2=R3=1;
	R2=0;
	if(C2==0)
		seg(0x90);

	R0=R1=R2=R3=1;
	R3=0;
	if(C1==0)
		seg(0xC0);
	
}
void seg(unsigned int ch)
{
	P2=0x00;
	P2=ch;
}	