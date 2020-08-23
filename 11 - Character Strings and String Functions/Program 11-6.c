/* Write a function called is_within() that takes a character and a string pointer as its two 
function parameters. Have the function return a nonzero value (true) if the character is 
in the string and zero (false) otherwise. Test the function in a complete program that uses 
a loop to provide input values for feeding to the function. */


#include <stdio.h>
#include <stdbool.h>

#define LIMIT 50

int is_within(const char* str, const char ch);

int main(void)
{
	char str[LIMIT];
	char ch;

	printf("Enter string: ");
	fgets(str, LIMIT, stdin);

	while (str[0] != '\0')
	{
		printf("Enter character to be found: ");
		ch = getchar();
		if (ch != '\n')
		{
			while (getchar() != '\n')
				continue;
		}

		if (is_within(str, ch))
			puts("true");
		else
			puts("false");

		printf("Enter string: ");
		fgets(str, LIMIT, stdin);
	}

	return 0;
}

int is_within(const char* str, const char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return 1;
		str++;
	}

	return 0;
}
