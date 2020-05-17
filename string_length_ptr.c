 #include<stdio.h>

 int main()
 {
     char *str="Welcome";
     int i,cout=0;
     for(i=0;str[i]!='\0';i++)
     {
         cout++;
     }
    printf("Result total string lenght == %d \n",cout);

 } 