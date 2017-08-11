#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {11, 13, 17, 19};
    int x;
    int *aptr;
    aptr=array;
    printf("aptr p is %p\n",aptr);
    printf("aptr d is %d\n",aptr);
    printf("aptr+1 d is %d\n",aptr+1);

    for(x=0;x<4;x++){
        printf("Element %d is %d\n",x+1,*aptr);
        printf("aptr %d is %d\n",x+1,aptr);
        //so * split val and addr sep and no one carrys both like the
        //way in p=*str and in aptr(addr) its only the addr for one ele
        aptr++;
    }

    return 0;
}
