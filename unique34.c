#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p;
    p=malloc(0);
    printf("p==%d\n",*(int*)p);
    return 0;
}