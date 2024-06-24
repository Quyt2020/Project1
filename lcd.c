#include <reg51.h>

#define kam P0

void lcd_init();
void lcd_data(unsigned char);
void lcd_cmd(unsigned char);
void delay(unsigned int);
void display(unsigned char *s, unsigned char r);

sbit rs = P2^0;
sbit rw = P2^1;
sbit en = P2^2;

void main()  
{  
    lcd_init();  
    lcd_cmd(0x80);  
    delay(100);  
    lcd_cmd(0xC0);  
    display("DHBK HaNoi", 10);  
    while(1);  
}  

void display(unsigned char *s, unsigned char r)  
{  
    unsigned int w;  
    for(w = 0; w < r; w++)  
    {  
        lcd_data(s[w]);  
    }  
}  

void lcd_init()  
{  
    lcd_cmd(0x01);  
    delay(100);  
    lcd_cmd(0x38);  
    delay(100);  
    lcd_cmd(0x06);  
    delay(100);  
    lcd_cmd(0x0C);  
    delay(100);  
}  

void lcd_data(unsigned char dat)  
{  
    kam = dat;  
    rs = 1;  
    rw = 0;  
    en = 1;  
    delay(100);  
    en = 0;  
}  

void lcd_cmd(unsigned char cmd)  
{  
    kam = cmd;  
    rs = 0;  
    rw = 0;  
    en = 1;  
    delay(100);  
    en = 0;  
}  

void delay(unsigned int n)  
{  
    unsigned int a;  
    for(a = 0; a < n; a++);  
}  
