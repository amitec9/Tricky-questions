#include<stdio.h>
#define LARGEST(X,Y)  (X>=Y)?X:Y
int main()
{
    int a=10,b=20,l=0;
    l=LARGEST(a++,b++);
    printf("a=%d,b=%d,largert=%d,",a,b,l);
    return 0;
}