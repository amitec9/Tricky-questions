#include<stdio.h>
void fun()
{
    static int i;
    ++i;
    printf("%d\n",i);
}
int main()
{
    fun();
    fun();
    fun();
    }