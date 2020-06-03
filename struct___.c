#include<stdio.h>

struct emp
{
    char name[9];
    int id;
    //char str[8];
};
int main()
{
    struct emp emp1;
    printf("%d",sizeof(emp1));
    
}
