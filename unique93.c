#include<stdio.h>
int main()
{
    struct tie
    {
        int t,i,e;/* data */
    };
    struct tie in={3,5,6};
    struct tie *foex=&in;
   printf("%d\n",*((int*)foex)+1+(3-2));
    
    
    
}