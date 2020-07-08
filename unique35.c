#include<stdio.h>
char* fun(void)
{
    char str[]="hello";
    return str;

}
char* fun1(void)
{
    char *str="hello";
    return str;

}

int main()
{
    printf("%s %s",fun(),fun1());
    return 0;
}