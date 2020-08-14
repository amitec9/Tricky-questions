#include<stdio.h>
int main()
{
    float f=1.0;
    int i1=(int)f;
    printf("%d\n",i1);
    float f1=1.0;
    int i2=* (int *) &f1;
    printf("%d\n",i2);
}