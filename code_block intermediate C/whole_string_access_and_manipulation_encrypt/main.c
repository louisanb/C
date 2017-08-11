#include <stdio.h>
#include <ctype.h>

char *encrypt(char *input);
//all err due to mis type of char with void
//* err due to af change char forgot * bef encrypt
//actually * err went away af rerun werid!
int main()
{
    char *instructions="Deliver the package to Berlin";
    printf("here is your secret instru: \n%s\n",encrypt(instructions));
    return 0;//9 err invalid use of void expression
}//*w %s char* vs int arg2
//13 err conflicting types for encrypt
char *encrypt(char *input)//* err conflicting types for encrypt
{
    static char output[64];//*w op not used
    int x=0;

    while(*input)
    {
        if(isalpha(*input))
//i guess c works with one by one like how y have to work with IMU and GPS (both hardware) in c++
            output[x]=*input+1;
        else
            output[x]=*input;
        printf("*input c is: %c\n",*input);//d e l iver pack...
        printf("*input c is: %s\n",output);//E Ef Efm Efmj...

        x++;
        input++;
    }
    //printf(x);
    printf(output);//Efmjwfs uif qbd1bhf up Cfsmjo
    printf("\n");
    return(output);//Efmjwfs uif qbd1bhf up Cfsmjo
}//*w control reaches end of non void f
