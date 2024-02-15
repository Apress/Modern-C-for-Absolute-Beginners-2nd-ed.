#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int *p1 = nullptr;
    double *p2 = nullptr;
    struct MyStruct *p3 = nullptr;
    
printf("The value of the p1 pointer is: %p.\n", (void*)p1);
    printf("The value of the p2 pointer is: %p.\n", (void*)p2);
    printf("The value of the p3 pointer is: %p.\n", (void*)p3);
}