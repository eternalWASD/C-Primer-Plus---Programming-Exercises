/* Using if else statements, write a program that reads input up to #, replaces each period 
with an exclamation mark, replaces each exclamation mark initially present with two 
exclamation marks, and reports at the end the number of substitutions it has made. */

//Redo exercise 4 using a switch.

#include <stdio.h>

int main(void)
{
	char ch;
	int periods, excl_marks;
	periods = excl_marks = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case ' ':
			periods++;
			putchar('!');
			break;
		case '!':
			excl_marks++;
			putchar('!');
			putchar('!');
			break;
		default:
			putchar(ch);
		}
	}
	printf("\n");
	printf("Replaced %d periods\n", periods);
	printf("Doubled %d exclamation marks\n", excl_marks);
}