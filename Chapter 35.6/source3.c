#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const uint8_t arr[] = {
#embed "somefile.jpg"
    };
}