#include<stdio.h>
#define MAX 10
int main()
{
int n,a,bi_num;
printf("Mx  ");
for(n=0;n<=10;++n)
{
    printf("%d ",n);
}
printf("\n----------------------------------------------------\n");
n=0;
do
{
    a=0,bi_num=1;
    printf("%2d",n);
    while (a <= n)
    {
        if (n == 0 || a== 0)
        {
            printf("%4d",bi_num);
        }
        else
        {
            bi_num=bi_num*(n - a +1)/a;
            printf("%4d",bi_num);
        }
        a= a+1;
        
    }
printf("\n");
n = n+1;    
    /* code */
} while (n <= MAX);
printf("----------------------------------");
return 0;

}