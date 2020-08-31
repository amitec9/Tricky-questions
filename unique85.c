#include<stdio.h>
void fun( int *a, int *b)
{
    *a^=*b^=*a^=*b;
}
int main()
{
    int x1=15,x2=25;
    fun(&x1,&x2);
    printf("%d %d",x1,x2);
    return 0;
}