/* Design and test a function that reads the first word from a line of input into an array and 
discards the rest of the line. It should skip over leading whitespace. Define a word as a 
sequence of characters with no blanks, tabs, or newlines in it. Use getchar(), not ???*/


#include <stdio.h>
#include <ctype.h>

#define LIMIT 12

void readwrd(char * arr);

int main(void)
{
	char arr[LIMIT] = " ";
	readwrd(arr);
	puts(arr);
	
	return 0;
}


void readwrd(char * arr)
{
	int inword = 0;
	char ch;
	int i = 0;

	while ((ch = getchar()) != EOF)
	{
		if (isspace(ch))
		{
			if (inword)
				break; 
			else
			{
				continue;
			}
		}
		if (!inword)
			inword = 1;
		*(arr + i) = ch;
		i++;

	}
}
