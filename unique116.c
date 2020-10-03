/* C Program to Put Positive and Negative Numbers in two Separate Arrays */

#include<stdio.h>

void PrintArray(int a[], int Size);

int main()
{
 int Size, i, a[10], Positive[10], Negative[10];
 int Positive_Count = 0, Negative_Count = 0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements  :   ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
 	if(a[i] >= 0)
 	{
 		Positive[Positive_Count] = a[i];
 		Positive_Count++;
	}
	else
	{
		Negative[Negative_Count]  = a[i];
	 	Negative_Count++;
	}
 }
  
 printf("\n Total Number of Positive Numbers in this Array = %d ", Positive_Count);
 printf("\n Array Elements in Positive Array  :  ");
 PrintArray(Positive, Positive_Count);
 
 printf("\n Total Number of Negative Numbers in this Array = %d ", Negative_Count);
 printf("\n Array Elements in Negative Array  : ");
 PrintArray(Negative, Negative_Count);
 return 0;
}

void PrintArray(int a[], int Size)
{
	int i;		
 	for(i = 0; i < Size; i++)
  	{
      printf("%d \t ", a[i]);
    }
    printf("\n");
}