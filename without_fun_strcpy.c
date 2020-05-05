#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[100],str1[100];
printf("Enter the String := ");
gets(str);
for(i=0;str[i]!='\0';i++)
{
    str1[i]=str[i];
}
str1[i]='\0';
printf("\nCopy string Result :=== %s",str1);
}