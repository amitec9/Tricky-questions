#include<stdio.h>
#include<stdlib.h>
struct foo1
{
    int num1;
    char x;
    float num2;
};

struct foo2
{
    int num3;
    char x;
    char y;
    float num4;
};



int main()
{
    struct foo1 obj1;
     struct foo2 obj2;
  
    
    printf("%lu\n",sizeof(obj1));
    printf("%lu\n",sizeof(obj2));
}