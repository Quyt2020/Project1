#include<reg51.h>                                 

sbit a = P3^0;
sbit x = P3^1;
sbit y = P3^2;
sbit z = P3^3;

void main()
{
    unsigned char m[10] = {0x40, 0xF9, 0x24, 0x30, 0x19, 0x12, 0x02, 0xF8, 0xE00, 0x10};
    unsigned int i, j;

    a = x = y = z = 1;

    while(1)
    {
        for(i = 0; i < 10; i++)
        {
	    P2 = m[i];  
            for(j = 0; j < 32800; j++);
        }
    }
}
