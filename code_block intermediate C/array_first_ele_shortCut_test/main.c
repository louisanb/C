#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={11 ,13, 17, 19};
    int x=0;
    int *aptr;
    //printf(x);//make a pter from int without cast
    aptr=array;
    //aptr=aptr+2;
    //*aptr=0;
    //printf(aptr); //warning pass arg 1 of printf from incompatible pter type
    //printf(array); //detto also same as ab note:expected 'const char * but arg is of type int
    //printf("%d",array);//%d exp int but arg 2 has int*
    // printf("%s",array);// char* vs int*
    printf("array p: %p\n",array);//0060FF00
    printf("array d: %d\n",array);//6356736 warning int vs int*
    printf("array s: %s\n",array);//a squire nonsense c* vs int*
    //printf("array val %d\n",0060FF00);//err invalid suffic FF00 on int constant
    //printf("array val %d\n",&0060FF00);//detto
    //int *v;////if i can read the specific addr then i can get the original val out
    //v=0060FF00;//invalid suffix FF00 on int const
    //printf("array val %d\n",v);
    //char *vc;//i gues there s no pt to do whole when y can access it form addr one by
    //one also *q=*str sec time ll crash maybe same reason why y cant assign 0060 addr to
    //another var it dn ms one addr has 2 var or 2 var s in the same addr that s why var name need to be unique
    //vc=0060FF00;//inv suffic 00FF on int const
    //printf("array val %d\n",vc);
    printf("&array val %d\n",&array);//6356736
    printf("*array p: %p\n",*array);//0000000B warning %p expect void* vs int
    printf("*array d: %d\n",*array);//11 warning int vs int*
    printf("*aptr d: %d\n",*aptr);//11
    printf("aptr p: %p\n",aptr);//00FF
    printf("*aptr d: %d\n",aptr);//6356736
//fir str and array is oppsite *array =val *str=addr and whenever y see * that ll
//chop and only show/take the fir ele. and for *str *also twisted addr to val but y
//can still get addr from str p. also to make it easy remb whenever assign just do
//the non * ver q=str aptr=array assign with * is bad dont worry/think about for array
//aptr=addr for str q=val and sim thing happened like when trans from q(str)/array to d
//it convert the char or addr(0060FF) to int (sa 97)
//since *str addr replace/ruin by * with fir ele y get addr from string p (val str/p still carry one/both) and use the right placeholder will get right thing out
//sim way to get val ruined by * y should get it from d array but i guess addr dont carry val/both
//also aptr and array is the same due to aptr=array copy both just like q=str y thought they r diff when y have the wrong way of *q=*str
//an argument wold be did d array convert addr to # or it get the whole val out either way it s weird cuz the digit dn match
//(11 13 17 19)-8 0060FF00-8 6356736-7 7 dn match any of them. it could lost a digit af tran either of them

    for(x=0;x<4;x++)
        printf("Element %d: %d\n", x+1, array[x]);
    return 0;
}
