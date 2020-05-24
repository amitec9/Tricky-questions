#include<stdio.h>
int fac(int n)
{
    if(n==0)
        return 1;
    return fac(n-1)*n;
}



int main()
{
    int n;
    n=fac(5);
    printf("Result == %d",n);
}