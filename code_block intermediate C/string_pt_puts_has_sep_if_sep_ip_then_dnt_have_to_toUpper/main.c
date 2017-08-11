#include <stdio.h>
#include <ctype.h>

void shouting(char *input);

int main()
{
    char string[64];
    printf("Type some text: ");
    fgets(string,64,stdin);
    printf("y typed:\n%s\n",string);
    shouting(string);
    printf("when shouting, text became upper case like this:\n%s\n",string);
    return 0;
}

void shouting(char *input)
{
    while(*input)
    {
        *input = toupper(*input);
        input++;
    }
}
