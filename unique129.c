C Program to find Sum of Geometric Progression Series
Write a C Program to find Sum of Geometric Progression Series (G.P. Series) using Math Formula, and without using Mathematical formula.

Geometric Progression Series
Geometric Series is a sequence of terms in where the next element obtained by multiplying common ration to the previous element. Or G.P. Series is a series of numbers in which a common ratio of any consecutive numbers (items) is always the same.

The mathematical formula behind this Sum of G.P Series
Sn = a(rn) / (1- r)
Tn = ar(n-1)
C Program to find Sum of Geometric Progression Series Example
It allows the user to enter the first value, the total number of items in a series, and the common ratio. Next, it will find the sum of the Geometric Progression Series. Here, we used For Loop to display the G.P series, which is optional.

/* C Program to find Sum of Geometric Progression Series */
#include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, r;
    float tn, sum = 0;
    
    printf(" Please Enter First Number of an G.P Series:  ");
    scanf("%d", &a);
    printf(" Please Enter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);
    printf(" Please Enter the Common Ratio:  ");
    scanf("%d", &r);
    
    sum = (a * (1 - pow(r, n ))) / (1- r);
    tn = a * (pow(r, n - 1));
    
    printf("\n The Sum of Geometric Progression Series =  %.2f", sum);
    printf("\n The tn Term of Geometric Progression Series = %.2f \n", tn);
    return 0;
}