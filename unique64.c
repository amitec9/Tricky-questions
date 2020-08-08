#include<stdio.h>
void fun()
{
    here:
        printf("if it work dont fix it");
}
int main()
{
    void fun();
    int i=1;
    while (i<=3)
    {
        printf("%d",i);
        if (i>2)
        {
            goto here;
        }
        
    }
    
}