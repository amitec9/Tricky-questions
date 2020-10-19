
C
C#
Java
R
Python
SQL
MySQL
Js
BI Tools
Informatica
Talend
Tableau
Power BI
SSIS
SSRS
SSAS
MDX
QlikView
More
C Programs
Python Programs
Java Programs
SQL FAQ’s
C Program to find ASCII Value of Total Characters in a String
How to write a C Program to find ASCII Value of Total Characters in a String using For loop and while loop with a practical example.

C Program to find ASCII Value of Total Characters in a String Example
This program uses For Loop to iterate each character inside a string. Inside this, we used the printf statement to print characters and their ASCII values. Please refer to the ASCII table to understand ASCII values in C Programming.

/* C Program to find ASCII Value of Total Characters in a String */
#include <stdio.h>
int main()
{
    char str[100];
    
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    for( int i = 0; str[i] != ‘\0’; i++)
    {
        printf(" The ASCII Value of Character %c  = %d \n", str[i], str[i]);
    }
    return 0;
}