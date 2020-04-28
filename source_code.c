/*program to print source code as program output.*/

// use __FILE__ to specify current file name and read the file.
//Author :-Amit kumar
#include<stdio.h>
int main()
{
	char c;
	FILE *fp;
	fp=fopen(__FILE__, "r");
	do{
		c=fgetc(fp);
		putchar(c);
	}
	while(c!=EOF);
	fclose(fp);
	
}