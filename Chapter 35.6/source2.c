#include <stdio.h>

int main(void)
{
    struct MyStruct
    {
        int x;
        double d;
    };

    struct MyStruct s = {
    // initializes each field with
    // comma-delimited integer constant-expressions
#embed "somefile.dat"
    };
}