#include<stdio.h>
#define str_size 100
int main()
{
    char str[str_size];
    int i,wrd;
    printf("input the string: ");
    fgets(str,sizeof str, stdin);
    i = 0;
    wrd = 1;
    while (str[i]!='\0')
    {
        if(str[i]== ' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d\n",wrd-1);
}