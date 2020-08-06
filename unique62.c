#include<stdio.h>
int main()
{
    struct bitfields
    {
        int b1:2;
        int b2:4;
        int b3:4;
        int b4:3;

    } bit ={2,3,8,7};
    printf("%d %d %d %d",bit.b1,bit.b2,bit.b3,bit.b4);
    
}