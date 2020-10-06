/* C Program For Strong Number */
 
#include <stdio.h>
 
int main()
{
  int Number, Temp, Reminder, Sum = 0, i; 
  long Factorial;
 
  printf("\nPlease Enter a Number to Check for Strong Number \n");
  scanf("%d", &Number);
  
  //Helps to prevent altering the original value
  Temp = Number;
  while( Temp > 0)
   {
     Factorial = 1, i = 1; 
     Reminder = Temp % 10;
     while (i <= Reminder)
     {
     	Factorial = Factorial * i;
     	i++;
     }
     printf("\n Factorial of %d = %d\n", Reminder, Factorial);
     Sum = Sum + Factorial;
     Temp = Temp /10;
   }
 
  printf("\n Sum of the Factorials of a Given Number %d is = %d\n", Number, Sum);
 
  if ( Number == Sum )
      printf("\n %d is a Strong Number.\n", Number);
  else
      printf("\n %d is not a Strong Number.\n", Number);
 
  return 0;
}