#include<stdio.h>
int main()
{
    int x= 10;
    int y = 20;
    x += y +=10;
    printf("%d %d",x,y);
    return 0;
}