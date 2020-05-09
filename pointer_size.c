// WAP of Pointer size
// Author :- Amit kumar
#include<stdio.h>
int main()
{
    int a,*ptr;
    char s,*ptr1;
    float f,*ptr2;
    ptr=&a;
    ptr1=&s;
    ptr2=&f;
    printf("Interger pointer == %d\n",sizeof(ptr));
    printf("Char pointer == %d\n",sizeof(ptr1));
    printf("Float pointer == %d\n",sizeof(ptr2));

}