/* The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1, truncating 
s2 or padding it with extra null characters as necessary. The target string may not be 
null-terminated if the length of s2 is n or more. The function returns s1. Write your own 
version of this function; call it mystrncpy(). Test the function in a complete program 
that uses a loop to provide input values for feeding to the function. */

#include <stdio.h>
#include <string.h>

#define LIMIT 100

void mystrncpy(char* s1, char* s2, int n);

int main(void)
{
	char * s1[LIMIT];
	char * s2[LIMIT];
	int n;

	printf("Enter string #1: ");
	fgets(s1, LIMIT, stdin);
	printf("Enter string #2: ");
	fgets(s2, LIMIT, stdin);

	while (s1[0] != '\0' && s2[0] != '\0')
	{
		printf("Enter number of characters to be copied: ");
		scanf("%d", &n);

		while (getchar() != '\n')
			continue;

		if (n > LIMIT)
			n = LIMIT;
		else if (n > strlen(s2))
			n = strlen(s2);

		mystrncpy(s1, s2, n);

		printf("%s\n", s1);

		printf("Enter string #1: ");
		fgets(s1, LIMIT, stdin);
		printf("Enter string #2: ");
		fgets(s2, LIMIT, stdin);
	}

	return 0;
}

void mystrncpy(char* s1, char* s2, int n)
{
	int i = 0;
	int len_of_s1 = strlen(s1);
	s1[len_of_s1 - 1] = ' ';
	int j = len_of_s1 + n;
	for (; i < n && len_of_s1 < j; i++, len_of_s1++)
		s1[len_of_s1] = s2[i];
	s1[j] = '\0';
}