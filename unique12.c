#include<stdio.h>
int main()
{
    int temp =65;
    void *q =&temp;
    char *r=q;
    printf("%c",*r);
}