#include <stdio.h>

int main(void)
{
    const char arr[] = {
#embed "myfile.txt" if_empty('N', 'o ', ' ', 'd', 'a', 't', 'a')
        , '\0'};
}