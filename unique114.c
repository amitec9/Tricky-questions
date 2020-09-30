
/* C Program to Delete an Element in an Array */

#include <stdio.h>
 
int main()
{
	int Array[10], Position, i, Size;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &Array[i]);
   	}     
 
  	printf("\n Please Enter a Valid Index Position of a Element that you want to Delete  :  ");
  	scanf("%d", &Position);
  	
	if(Position < 0 || Position >= Size)
  	{
  		printf("\n Please Enter a Valid Index Position between 0 and %d", Size-1);
  	}
  	else
  	{
  		for (i = Position; i < Size; i++)
   		{
	    	Array[i] = Array[i + 1];
   		}
   		Size--;
	}
 	printf("\n Final Array after Deleteing an Array Elemnt is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d\t", Array[i]);
  	}	     
 	return 0;
}