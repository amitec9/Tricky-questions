#include<stdio.h>
int main()
{
    int k=5;
    static int i;
    i=k;
    printf("%d\n",i);
    return 0;

}