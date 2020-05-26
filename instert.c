#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
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

void Append(struct Array *arr,int x)
{
     if(arr->lenght<arr->size)
        arr->A[arr->lenght++]=x;
}
void insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->lenght)
    {
        for(i=arr->lenght;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->lenght++;
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    //Append(&arr,10);   
    insert(&arr,2,10);
    Display(arr);
    return 0;
}