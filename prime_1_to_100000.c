/* C Program to Print Prime Numbers between 1 to 100 using For Loop */
 
#include <stdio.h>
 
int main()
{
  int i, Num, count; 
  
  printf(" Prime Number from 1 to 100000 are: \n"); 
  for(Num = 1; Num <= 100000; Num++)
  {
    count = 0;
    for (i = 2; i <= Num/2; i++)
    {
  	if(Num%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Num != 1 )
    {
	printf(" %d ", Num);
    }  
  }
  return 0;
}