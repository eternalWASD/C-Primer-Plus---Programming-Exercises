/* Write a function called string_in() that takes two string pointers as arguments. If 
the second string is contained in the first string, have the function return the address 
at which the contained string begins. For instance, string_in("hats", "at") would 
return the address of the a in hats. Otherwise, have the function return the null pointer. 
Test the function in a complete program that uses a loop to provide input values for 
feeding to the function. */

#include <stdio.h>

#define LIMIT 50

char* string_in(char* str, char* str_test);
char* getstr(char *string, int n);

int main(void)
{
    char str[LIMIT];
	char str_test[LIMIT];
	char *ret_pt; //gets return value of string_in function

	printf("Enter original string: ");
	getstr(str, LIMIT);
    printf("Enter string to be found: ");
	getstr(str_test, LIMIT);
    
	while (str[0] != '\0' && str_test[0] != '\0')
	{
		ret_pt = string_in(str, str_test);

		if (ret_pt == NULL)
			printf("String not found.\n");
		else
			printf("String found at index %d\n", ret_pt - str);

		printf("Enter original string: ");
		getstr(str, LIMIT);
		printf("Enter string to be found: ");
		getstr(str_test, LIMIT);
	}

	return 0;
}


char* string_in(char* str, char* str_test) // checks if str_test is in str
{
    int i;

	while (*str != '\0')
	{
		i = 0;

		while (*(str + i) == *(str_test + i))
		{
			i++;

			if (*(str_test + i) == '\0')
				return str;
		}

		str++;
	}

	return NULL;
}

char * getstr(char *string, int n)	// wrapper for fgets that replaces newline with null
{
	
	char *return_value = fgets(string, n, stdin);	

	while (*string != '\0')
	{
		if (*string == '\n')
		{
			*string = '\0';
			break;
		}

		string++;
	}

	return return_value;
}