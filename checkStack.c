//write a code to check whether a stack grows upwards or downwards?
//author:- Amit kuamr
#include<stdio.h>
int main()
{
    int i=2;
    int j=3;
    if(&i>&j)
    {
        printf("stack grown downwards \n");
    }
    else
    {
        printf("stack grown upwards");
    }
    
}