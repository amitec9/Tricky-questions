/* C Program to find Sum of Upper Triangle Matrix */
 
#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
     
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(columns > rows)
    		{
    			Sum = Sum + a[rows][columns];
			}
   	 	}
  	}
  	
  	printf("\n The Sum of Upper Triangle Matrix = %d", Sum);
 	return 0;
}