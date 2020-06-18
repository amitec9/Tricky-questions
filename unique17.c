#include<stdio.h>
void fun(int *x ,int *y)
{
	*x^=*y^=*x^=*y;
}
int main()
{
int x=10,y=20;
fun(&x,&y);
printf("x=%d  y=%d",x,y);//x=20,y=10

}
