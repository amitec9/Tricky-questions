#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int lenght;
};
void Display(struct Array arr)
{int i;
    printf("Element :- \n");
     for(i=0;i<arr.lenght;i++)
    {
        printf("%d \t",arr.A[i]);
    }
}
int main()
{
    struct Array arr;
    int n,i;
    printf("Enter the Size of Array \n");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.lenght=0;
    printf("enter number of a number \n ");
    scanf("%d",&n);
    printf("Enter the all element\n");
    for(i=0;i<n;i++)
    
        scanf("%d",&arr.A[i]);
    
    arr.lenght=n;
    Display(arr);
    return 0;
}