#include<stdio.h>
int fun()
{
    char *str2="amit";
    printf("%p\n",str2);  
}
int main()
{
    char *str1="amit";
    printf("%p\n",str1);
    fun();
    return 0;
}