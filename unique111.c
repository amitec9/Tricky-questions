/* C Program to Remove First Occurrence of a Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, len;
  	i = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Remove :  ");
  	scanf("%c", &ch);
  	
	len = strlen(str);
	   	
  	while(i < len && str[i] != ch)
	{
		i++;
	}  
  	
  	while(i < len)
  	{
  		str[i] = str[i + 1];
		i++;  
	}
	printf("\n The Final String after Removing First occurrence of '%c' = %s ", ch, str);
	
  	return 0;
}