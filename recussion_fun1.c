#include<stdio.h>
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        
         printf("FUNA == %d\n",n);
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        
        printf("FUNB == %d\n",n);
        funA(n/2);
    }
}
int main()
{
    int x=20;
    funA(x);
}