#include<stdio.h>
int main()
{
    int num,cout,res;
    printf("\nEnter the number :- ");
    scanf("%d",&num);
    for(cout=31;cout>=0;cout--)
    {
        res=num>>cout;
        if(res&1)
        {
            
            printf("1");

        }
        else
        {
            printf("0");
        }
    }
}