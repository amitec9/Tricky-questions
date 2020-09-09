#include<stdio.h>  
void change(int,int);  
int main()  
{  
    int a=25,b=50;  
    change(a,b); 
    printf("The value assigned to a is: %d\n",a);  
    printf("n");  
    printf("The value assigned to of b is: %d\n",b);  
    return 0;  
}  
void change(int x,int y)  
{  
    x=100;  
    y=200;  
}