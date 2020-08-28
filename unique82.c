//Author :- Amit kumar
#include<stdio.h>
int count_bit_1(int n){
    int i;
    for ( i = 0; n; i++)
    {
       n &= n-1; 
    }
    return i;
    
}
int main()
{
    int  num;
    printf("Enter the a number");
    scanf("%d",&num);
    printf("number is hex %X\n",num);
    printf("%d bit 1 in %d\n",count_bit_1(num),num);
}