//How will you print numbers from 1 to 100 without using loop?
//Author :- Amit kumar
#include<stdio.h>
int main()
{
static int n=1;

if(n  <= 100)
{
	printf(" %d \t",n++);
	main();
}
}