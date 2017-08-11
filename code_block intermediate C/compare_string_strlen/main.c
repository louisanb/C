#include <stdio.h>
#include <string.h>

//char *longer(char *s1, char *s2);
char *longer(char *s1, char *s2);//exp char vs char*
//note on line 5: prev declaration of longer was here??
//***all err and w caused by forgot * in s1 during protocall
int main()
{
	char *string1 ="A long time ago";
	char *string2 ="In a galaxy far, far away";
	char *result;
	char *str1;
    char *str2;

	//str1= *string1;//run this ll crash
	//str2= *string2;
    str1= string1;//same as input string1 straight
	str2= string2;

    result = longer(str1, str2);//w make int form ptr without cast
	//result = longer(string1, string2);
	printf("String '%s' is longer.\n", result);

	return(0);
}

char *longer(char *s1, char *s2)
{//err confliction types for longer
	int len1, len2;

	len1=strlen(s1);
	len2=strlen(s2);

	if(len1>len2)
		return(s1);
	else
		return(s2);
}
