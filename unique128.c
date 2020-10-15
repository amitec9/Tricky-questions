/* C Fibonacci series Program using While Loop */

#include <stdio.h>
int main()
{
  int Number, i = 0, Next, First_Value = 0, Second_Value = 1;

  printf("\n Please Enter the Range Number: ");
  scanf("%d",&Number);
  
  while(i < Number) 
  {
  	if(i <= 1)
  	{
  		Next = i;
	}
	else
	{
		Next = First_Value + Second_Value;
		First_Value = Second_Value;
		Second_Value = Next;
	}
    printf("%d \t", Next);
   	i++;  
  }
  return 0;
}