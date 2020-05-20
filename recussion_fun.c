#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        fun(n-2);
        printf("%d\t",n);
        //fun(n-1);
    }
}
int main()
{
    int x=20;
    fun(x);
}