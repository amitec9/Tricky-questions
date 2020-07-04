#include<stdio.h>
void *fun(void);
void(*fun1)();
void main()
{
    (fun1=fun())();
}
void *fun(void)
{
    printf("Hello\n");
    return &fun;
}
