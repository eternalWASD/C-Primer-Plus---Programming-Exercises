/* Design and test a function that searches the string specified by the first function 
parameter for the first occurrence of a character specified by the second function 
parameter. Have the function return a pointer to the character if successful, and a null 
if the character is not found in the string. (This duplicates the way that the library 
strchr() function works.) Test the function in a complete program that uses a loop to 
provide input values for feeding to the function. */


#include <stdio.h>

#define LIMIT 50

char* strchr(const char* str, const char ch);

int main(void)
{
	char str[LIMIT];
	char ch;
	char* ret_pt; //gets return value of strchr function

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
		ret_pt = strchr(str, ch);
		
		if (ret_pt == NULL)
			printf("Character not found.\n");
		else
			printf("Character %c found at index %d\n", ch, ret_pt - str);

		printf("Enter string: ");
		fgets(str, LIMIT, stdin);
	}

	return 0;
}

char* strchr(const char* str, const char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return str;
		str++;
	}

	return NULL;
}
