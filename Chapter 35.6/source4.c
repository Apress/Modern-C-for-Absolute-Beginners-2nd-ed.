#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const char arr[] = {
#embed "myfile.txt"
    };
}