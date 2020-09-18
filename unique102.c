/* C Program to Remove All Duplicate Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, k;
  	i = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	 	
  	while(i < strlen(str))
  	{
  		j = i + 1;
  		
  		while(str[j] != '\0')
  		{
  			if(str[j] == str[i])  
			{
				k = j;
				
  				while(str[k] != '\0')
				{
					str[k] = str[k + 1];
					k++;
				}
 			}
 			j++;
		}
		i++;
	}
	
	printf("\n The Final String after Removing All Duplicates = %s ", str);
	
  	return 0;
}