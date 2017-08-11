#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch='A';
    do{
        putchar(ch);
        ch++;
    }
    while( ch != 'Z'+1);
    putchar('\n');
    return 0;
}
