#include <stdio.h>

int main(void)
{
    int x1 = 100; // decimal
    int x2 = 0x64; // hexadecimal
    int x3 = 0144; // decimal
    int x4 = 0b01100100; // binary
    
    printf("The value of the variable x1 is: %d\n", x1);
    printf("The value of the variable x2 is: %d\n", x2);
    printf("The value of the variable x3 is: %d\n", x3);
    printf("The value of the variable x4 is: %d\n", x4);
}