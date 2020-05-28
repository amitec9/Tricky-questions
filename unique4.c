#include<stdio.h>
int main()
{
int *b;
void *ptr;
int a=18;
ptr=&a;
b=ptr;
printf("%d",*b);
return 0;
}