/* Write a function that takes three arguments: a character and two integers. The character 
is to be printed. The first integer specifies the number of times that the character is to 
be printed on a line, and the second integer specifies the number of lines that are to be 
printed. Write a program that makes use of this function. */

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	chline('#', 13, 15);
}

void chline(char ch, int i, int j)
{
	for (int c = 0; c < i; c++)
	{
		for (int r = 0; r < j; r++)
			putchar(ch);
		putchar('\n');
	}

}
