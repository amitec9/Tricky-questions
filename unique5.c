#include<stdio.h>
struct covid

{
    char covid1;
    int covid2;
};


int main()
{
char *p_covid;
p_covid=&covid;
covid.covid1=19;
covid.covid2=19;
p_covid[2]=20;
printf("COVID%d practice social distance\n",covid.covid2);
}