#include<stdio.h>
#define ADD(s1,s2) printf("%s=%s %s=%s\n",#s1,s1,#s2,s2);
int main()
{
    char *str1 = "Hello";
    char *str2 ="World!";
    ADD(str1,str2);
    return 0;
   
}