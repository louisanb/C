#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *string = "abc efg";
    char str[10] = "hij";
    char *q;
    //char astr[]="xxx";
    int len;
    //strlen(astr);
    //strlen(*string);//statement with no effect
    len=strlen(string);//len is 7
    //len=strlen(*string);//arg of strlen pter from int without cast
    //q=*string; //assignment makes pter from integer without a cast
    //len=strlen(str);//*string is a q is null
    printf("len is: %d\n", len);//3
    *q=*string; //dont believe this sec see the sec sec q=str thats when y understand
    //q=string; //*string is a q is abc efg
    printf("*string is: %c \n", *string);//*string is a, for both *q=*string q=string
    //printf("*string is: %s \n", *string); //%s ex char * vs int (but arg 2 has type int
    printf("string is: %s \n", string);//cant run cuz of q=*stirng
    //but now runs string is abc efg same for both q=string *q=*string
    //printf("string is: %c \n", string);//c int vs char*. s*str and this-char(c) !=str(s) cuz it supposed to work cuz char(*str)=char but some how it became int
    printf("q s is: %s \n", q);//nul //there 2 reveals q !=str (*q!=*str) i thought they do and in a lot of cases they do but str s =s not nul cuz its val
    //printf("q c is: %c \n", q);//int vs c(*). same as str down there str !=c. (from above)also str's c !=c s!=c but here it things q(s)=c at least besides the err
    //printf("q d is: %d \n", q);//int vs c(*) int vs str/val i dont know why its char i thought it s char in the begining but not af char a(addr of str *str) != str
    printf("q p is: %p \n", q);//0000000 ?? all these # dn ms this one alone kind of ms cuz pter of a str/val dn ms so it freak out with 000s
    //printf("*q is: %s \n", *q);//char* vs int
    printf("*q c is: %c \n", *q);//a
    printf("*q d is: %d \n", *q);//97. same as *str which is loca but !=loca of array it s a ele instead
    //printf("*q is: %p \n", *q);//void* vs int.(from above) therefore p dnw chr vs pter
    //from sec sec and cq line yes s !=c cuz s=c* c*!=c ms
    //from sec sec and sq(null) q=c* s i guess is close to c*{which=s(str)} i guess since it s close but still not the same so it feak out
    //but it still dn ms cuz i thought q=str and s str gives abc p q(000000) is sim to p str(00403)
    //yea i thought when y do q=str *q=*Str r the same and both assign both val and addr to q or q*
    //but actually they r not if y see his code he never used *q=*str i guess it(*str) only assign the addr to q*
    //not the val that s why s q is null cuz val/str is missing actually when y do *q=*str it become the array/*array
    //weird thing where *str is only the first ele so its a and technically c q should give a but c!=c* y d think
    //q is c cuz *q=*str where only the fir ele c got passed so now q=fir ele which q=c but actually this is bad not only
    //*q=*str did nt pass both val and addr or on *str side its only a ele also left *q did not carry q or both *q and q
    //thats why p q is null cuz q never got carryed and c q gives c vs s* due to q never got make to *q which is a ele which is c
    //so q carrys its old c* that s why c q gives c vs c*
    //but *q got pass by *str so *q=a and why d *q=97 is cuz a =97 or a's int val=97 or something

    printf("*string d is: %d \n", *string);//97
    //printf("*string p is: %p \n", *string);//p ex type void vs int
    printf("*string c is: %c \n", *string);//a, if this is str then has to be s to work cuz a is char=char str is not char so use s
    //printf("*string s is: %s \n", *string);//c(*) vs int
    printf("string p is: %p \n", string);//00403041  ??
    //printf("string d is: %d \n", string);//int vs char
    //printf("string c is: %c \n", string);//int vs char
    //printf("string s is: %s \n", string);//abc efg these 2 y can see array addrss != str address which = #(in p in c its the first ele) which werid dn ms

    printf("q==string \n");
    q=string;
    printf("string s is: %s \n", string);//abc efg same as above
    printf("string p is: %p \n", string);//00403041
    //printf("string d is: %d \n", string);//exp int vs char*
    //printf("*string d is: %c \n", string);//int vs char* ****actually it ms bef s/val!=c cuz the c is char* which=s c!=s but c* is
    printf("*string d is: %d \n", *string);//97 no error but crash
    //printf("*string p is: %p \n", *string);//p ex type void vs int
    printf("*string c is: %c \n", *string);//a same as above
    //printf("*string s is: %s \n", *string);//c* vs int here it again how come addr become int even if its the first ele its still c vs int
    //printf("string q str **sss is: %s \n", string);//q str **sss abc efg this is same as xxx i used this to check q=str *q=*str

    printf("q s is: %s \n", q);//abc efg above is null
    //printf("q c is: %c \n", q);//int vs c*
    //printf("q d is: %d \n", q);//int vs c*
    printf("q p is: %p \n", q);//00403030
    //printf("*q s is: %s \n", *q);//c* vs int
    printf("*q c is: %c \n", *q);//a. this and abv shows addr str is a c not c* and abv int thing is just cuz it freak out
    printf("*q d is: %d \n", *q);//97. this and abv 2 shows actually for some reason str* is int so both int and c
    //printf("*q p is: %p \n", *q);//void* vs int

    //*q=*string; //enable will crash i guess once saved at a location y cant change it
    //printf("*string is: %s \n", *string);//%s exp char* vs int
    //printf("*string xxx is: %s \n", string);// no error but crash without xxx output
    //q=string;// enable wont crash
    //printf("*string is: %s \n", *string);//char vs int
    //printf("*string is: %s \n", string);//no error but crash
    return 0;
}
