/* Write a program that reads input until encountering #. Have the program print each 
input character and its ASCII decimal code. Print eight character-code pairs per line. 
Suggestion: Use a character count and the modulus operator ( %) to print a newline 
character for every eight cycles of the loop. */



#include <stdio.h>
#include <ctype.h>

#define RANGE 8

int main(void)
{
	char ch;
	int count = 0;

	printf("Please enter your characters:\n");
	while ((ch = getchar()) != '#')
	{
		if (isalpha(ch))
		{
			count++;
			printf("%c-%d ", ch, ch);

			if (count % RANGE == 0)
				printf("\n");
		}
		else
		{
			continue;
		}
	}

	return 0;
}

