//Author :- Amit kumar
#include<stdio.h>
#pragma pack(1)
struct Data
{
    int i;
    char c;
    /* data */
};
int main()
{
    struct Data d;
    printf("%d",sizeof(d));
    return 0;
    
}