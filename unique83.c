//Author:- Amit Kumar
#include<stdio.h>
struct test
{
    char a;
    char b;
    int i;
    char c;
    char d;

}__attribute__((packed)) test1;
int main()
{
    printf("%lu",sizeof(test1));
}
