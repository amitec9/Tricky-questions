#include<stdio.h>
int main()
{
    float r,d,t,code;
    printf("Enter yor code\n 1: for rupees to doller\n 2: for doller to rupee ");
    scanf("%f",&code);
    if(code ==  1)
    {
        printf("Enter your nepali amout :");
        scanf("%f",&r);
        d = r/(117.25);
        printf("you have doller 0.2f ",d);
    }
    else if(code ==  2)
    {
        printf("Enter your nepali amout :");
        scanf("%f",&d);
        r=d*(117.25);
        printf("you have doller 0.2f ",r);
    }
    else
    {
        printf("Invalid code");
    }
}