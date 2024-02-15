#include <stdio.h>

int main(void)
{
    constexpr int x = 10;

    enum
    {
        FIRST = x,
        SECOND,
        THIRD
    };

    constexpr int y = x;
    static int myvar = x + 20;

    int myarray[x]; // valid, not a variable length array

    printf("The value of x is: %d\n.", x);
    printf("The value of y is: %d\n.", y);
    printf("The value of myvar is: %d\n.", myvar);
    printf("Declared an array of %d elements. Valid, not a VLA.\n", x);
}