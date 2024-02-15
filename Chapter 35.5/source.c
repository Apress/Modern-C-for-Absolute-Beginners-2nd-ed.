#include <stdio.h>

int main(void)
{
    int x = {};

    struct MyStruct
    {
        int a;
        double b;
    } s = {};

    int arr[5] = {};

    printf("The value of x is: %d.\n", x);
    printf("The value of s.a is: %d.\n", s.a);
    printf("The value of s.b is: %f.\n", s.b);
    
    printf("The array values are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}