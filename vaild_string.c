//WAP STRING validating string
//Author:- Amit kumar

 #include<stdio.h>
int vaild(char *str)
{
int i;
     for(i=0;str[i]!='\0';i++)
     {
         if(!(str[i]>=65 && str[i]<=90) && !(str[i]>=97 && str[i]<=122) && !(str[i]>=48 && str[i]<=57) )
         {
             return 0;
         }
     }
     return 1;
    
}
 int main()
 {
     char *str="WELCOME@gmail.com";
     if(vaild(str))
     {
         printf("valid string");

     }
     else
     {
         printf("not validating string");
     }
     [