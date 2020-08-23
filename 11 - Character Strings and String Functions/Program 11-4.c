/* Design and test a function like that described in Programming Exercise 3 except that it 
accepts a second parameter specifying the maximum number of characters that can be 
read. */


#include <stdio.h>
#include <ctype.h>

#define LIMIT 12

void readwrd(char* arr, int n);

int main(void)
{
	char arr[LIMIT] = " ";
	readwrd(arr, LIMIT);
	puts(arr);

	return 0;
}


void readwrd(char* arr, int n)
{
	int inword = 0;
	char ch;
	int i = 0;

	while ((ch = getchar()) != EOF && i < n)
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
