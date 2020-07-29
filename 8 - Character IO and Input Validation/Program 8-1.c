/* Devise a program that counts the number of characters in its input up to the end of file. */


#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;
	while ((ch = getchar()) != EOF)
	{
		count++;
		putchar(ch);
	} 
	printf("Number of characters entered: %d", count);
}