#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}



int main()
{
    int n;
    n=sum(10);
    printf("Result == %d",n);
}