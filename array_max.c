#include<stdio.h>
int main()
{
    int arr[5]={2,3,5,6,1};
    int max=arr[0];
    for(int i=0; i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
          
        }
    }
      printf("ARRAY max ===  %d",max);
}