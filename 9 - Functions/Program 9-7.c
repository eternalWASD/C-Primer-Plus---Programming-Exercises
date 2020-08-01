/* Write a program that reads characters from the standard input to end-of-file. For each 
character, have the program report whether it is a letter. If it is a letter, also report 
its numerical location in the alphabet. For example, c and C would both be letter 3. 
Incorporate a function that takes a character as an argument and returns the numerical 
location if the character is a letter and that returns –1 otherwise. */


#include <stdio.h>
#include <ctype.h>

int letterpos(char letter);

int main(void)
{
	char ch;

	while (scanf(" %c", &ch) != EOF)
	{ 
		printf("Char entered - %c, numeric location in alphabet - %d\n", ch, letterpos(ch));
	}
}

int letterpos(char letter)
{
	if (isalpha(letter))
		return (tolower(letter) - 96);
	else
		return -1;
}
