#include <stdio.h>

int main(void)
{
    int x = {
#embed "somefile.dat" if_empty(0)
    };
}