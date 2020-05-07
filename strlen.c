/* Find the String lenght without using function.
Author:- Amit kumar
*/

#include<stdio.h>
int main()
{
    char str[20]="Hello World";
    int cout=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        cout++;
    }
    printf("String lenght == %d",cout);

}