/* Write a program that reads input as a stream of characters until encountering EOF. Have 
it report the average number of letters per word. Don’t count whitespace as being letters 
in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that 
now. (If you do want to worry about it, consider using the ispunct() function from the 
ctype.h family.) */



#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	float words, charnum, average;
	words = charnum = average = 0.0;
	bool isword = true;

	while ((ch = getchar()) != EOF)
	{
		if (isspace(ch))
			continue;
		else if (ispunct(ch))
		{
			continue;
			isword = true;
		}
		else
		{
			charnum++;
			if (isword)
			{
				words++;
				isword = false;
			}
		}
	}
	average = charnum / words;
	printf("The average number of letters per word is %.1f.\n", average);
}