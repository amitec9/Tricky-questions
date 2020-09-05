#include <stdio.h>
#if !(a)
    int b = 15;
#else
    int b=25;
#endif

int main()
{
    printf("%d",b);
    return 0;
}