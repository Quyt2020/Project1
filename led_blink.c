#include <reg51.h>

void main()  
{  
    unsigned int i;  
    unsigned char j, b;  
    
    while(1)  
    {  
        P0^0 = 0x01;  
        b = P0;  
        
        for(j = 0; j < 3000; j++);  
        
        for(j = 0; j < 8; j++)  
        {  
            b = b << 1;  
            b = 0x01;  
            P0^0 = b;  
        }
    }  
}

