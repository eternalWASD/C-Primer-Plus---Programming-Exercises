/* Devise a function chline(ch,i,j) that prints the requested character in columns i
through j. Test it in a simple driver. */

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	chline('#', 13, 15);
}

void chline(char ch, int i, int j)
{
	for (int c = 0; c < i; c++)
		putchar(' ');
	for (int r = 0; r < j; r++)
		putchar(ch);
	return 0;
}

