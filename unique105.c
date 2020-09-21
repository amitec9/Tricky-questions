/* C program to interchange Diagonals of a Matrix */
 
#include<stdio.h>
void interchnage_Diagonals(int arr[10][10], int i, int j);

int main()
{
 	int i, j, rows, columns, arr[10][10], temp;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &arr[rows][columns]);
    	}
  	}
  	
  	if(rows == columns)
  	{
  		interchnage_Diagonals(arr, i, j);
  	}
  	else
  	{
  		printf("\n The Matrix that you entered is Not a Square matrix" );
	}

 	return 0;
}

void interchnage_Diagonals(int arr[10][10], int i, int j)
{
	int rows, columns, temp;
	for(rows = 0; rows < i; rows++)
  	{
  		temp = arr[rows][rows];
  		arr[rows][rows] = arr[rows][i - rows - 1];
  		arr[rows][i - rows - 1] = temp;
	}		
  	  
 	printf("\n Matrix Elemnts after Interchanging Diagonals are: \n");
 	for(rows = 0; rows < j; rows++)
  	{
   		for(columns = 0; columns < i; columns++)
    	{
    		printf("%d \t ", arr[rows][columns]);
    	}
    	printf("\n");
  	}
}