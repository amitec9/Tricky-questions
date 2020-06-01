#include<stdio.h>
int main()
{
    int i=0,j=0;
    do{
        printf("Hello",j=i--,i++);
    }while (j != 0);
   
}