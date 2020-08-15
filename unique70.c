#include<stdio.h>
int main()
{
    union 
    {
        char l1;
        int l2;

    }myvar ={.l2=100};
    printf("%c %d",myvar.l1,myvar.l2);

    
}