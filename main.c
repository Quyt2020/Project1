#include<reg51.h>  
void main()  
{  
unsigned int k;  
unsigned char l,b;  
while(1)  
{  
P0=0x01;  
b=P0;  
for(l-0;l<3000;l++);  
for(k=0;k<8;k++)  
{  
b=b<<1;  
P0=b;  
}  
}  
}  