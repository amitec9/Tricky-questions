#include<stdio.h>
int add(int x,int y)
{
    if(x == 0)
    {
        return y;
    }
    else if(y == 0)
    {
        return x;
    }
    else
    {
        printf("%*c%*c",x,'\r',y,'\r');
    }
    
    
}
int main()
{
 int x,y;
 printf("Enter the two number");
 scanf("%d%d",&x,&y);
 printf("sum two number =%d\n",add(x,y));
 return 0;
}