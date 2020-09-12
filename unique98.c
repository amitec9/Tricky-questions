

#include<stdio.h>
void change(int*,int*);  
int main()  
{  
    int a=25,b=50;  
    change(&a,&b); 
    printf("The value assigned to a is: %d",a);  
    printf("n");  
    printf("The value assigned to b is: %d",b);  
    return 0;  
}  
void change(int *x,int *y)  
{  
    *x=5900;  
    *y=200;  
}
