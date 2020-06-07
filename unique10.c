#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;b=20;
    c=printf("%d",a)+ ++b;
    printf("%d",c);
}