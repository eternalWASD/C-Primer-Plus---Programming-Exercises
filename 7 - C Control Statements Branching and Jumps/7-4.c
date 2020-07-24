/* Using if else statements, write a program that reads input up to #, replaces each period 
with an exclamation mark, replaces each exclamation mark initially present with two 
exclamation marks, and reports at the end the number of substitutions it has made. */


#include <stdio.h>

int main(void)
{
	char ch;
	int periods, excl_marks;
	periods = excl_marks = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			periods++;
			putchar('!');
		}
		else if (ch == '!')
		{
			excl_marks++;
			putchar('!!');
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n");
	printf("Replaced %d periods\n", periods);
	printf("Doubled %d exclamation marks\n", excl_marks);
}