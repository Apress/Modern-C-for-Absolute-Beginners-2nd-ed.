#include <stdio.h>

int main(void)
{
    constexpr int x = 123;
    constexpr unsigned u = 456u;
    constexpr char mystring[] = {"Hello."};
    printf("The value of x is: %d\n", x);
    printf("The value of u is: %u\n", u);
    printf("The value of mystring is: %s\n", mystring);
}