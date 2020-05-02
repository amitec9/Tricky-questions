#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the First number a  :-  ");
    scanf("%d",&a);
    printf(" \n Enter the second number  b :-  ");
    scanf("%d",&b);
    a^=b;
    b^=a;
    a^=b;
    printf("\nResult a=%d  b=%d",a,b);
}