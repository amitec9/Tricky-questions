#include<stdio.h>
#if !(x)
    int y=10;
#else
    int y=20;
#endif

int main()
{
    printf("%d",y);
}
