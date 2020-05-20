//WAP STRING Upper case
//Author:- Amit kumar

 #include<stdio.h>

 int main()
 {
     char str[10]="welcome";
     int i,cout=0;
     for(i=0;str[i]!='\0';i++)
     {
         str[i]=str[i]-32;
     }
    
    printf("Result  string upper == %s \n",str);

 } 