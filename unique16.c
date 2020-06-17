#include<stdio.h>
int main()
{
    int i=5;
    int j;
    j=sizeof(++i+ ++j);
    printf("i=%d  j=%d",i,j);
}