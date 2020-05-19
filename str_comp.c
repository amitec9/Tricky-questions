#include<stdio.h>
int main()
{
    int i,j;
    char *str="welcome";
    char *str1="walcome";
    for(i=0,j=0;str[i]!='\0' && str1[j]!='\0';i++,j++)
    {
        
        if(str[i]!=str1[j])
        {
            printf("Equl");
            break;
        }
        else
        {
            printf("Not equl");
            break;
        }
        
    }
    if(str[i]==str1[j])
    {
        printf("Equl");
    }

}