#include<stdio.h>
void fun(int fun1[])
{
    int loc_arr[3]={6,7,8};
    fun1= loc_arr;
    fun1++;
    printf("%ld\n",fun1[1]);
    printf("%ld\n",fun1[2]);

}
int main()
{
int fun11[5]={1,2,3,4,5};
fun(fun11);
}