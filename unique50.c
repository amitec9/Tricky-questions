#include<stdio.h>
int main()
{
    static int a[]={10,20,30,40,50};
    static int *p[]={a,a+3,a+4,a+1,a+2};
    int **ptr=p;
    ptr++;
    printf("%d %d",ptr-p,**ptr);
}