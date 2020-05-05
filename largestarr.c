/*find the largest number in array
Author :- Amit kumar */
#include<stdio.h>
int main()
{
    int arr[5]={10,30,40,50,20};
    int max=arr[0],i;
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Result == %d",max);
}