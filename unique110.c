#include<stdio.h>
#include<string.h>
float modbus_get_float(const int *src)
{
    float f;
    int i;
    printf("%d\n",src[1]);
    printf("%d\n",src[0]);
    i = (((int)src[1]) << 16) + src[0];
    memcpy(&f, &i, sizeof(float));

    return f;
}
int main()
{
    int a[2]={2,3};
    //modbus_get_float(&a);
    printf("%f\n",modbus_get_float(&a));
}