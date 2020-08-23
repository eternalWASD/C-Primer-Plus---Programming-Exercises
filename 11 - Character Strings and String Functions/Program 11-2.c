/* Design and test a function that reads the first word from a line of input into an array and 
discards the rest of the line. It should skip over leading whitespace. Define a word as a 
sequence of characters with no blanks, tabs, or newlines in it. Use getchar() */


#include <stdio.h>

#define SIZE 5

void fetch_n(char * inp, int n);

int main(void)
{
	int j = 0;

	char arr[SIZE];
	fetch_n(&arr, SIZE);
	

	for (; j < SIZE; j++)
		if (arr[j] == '\0')
			break;
		else
			putchar(arr[j]);

	return 0;
}

void fetch_n(char * inp, int n)
{
	int i = 0;
	char tmp;
	printf("Enter %d characters: ", SIZE);
	for (; i < SIZE; i++)
	{
		tmp = getchar();
		if (tmp == ' ' || tmp == '\t' || tmp == '\n')
		{
			inp[i] = '\0';
			break;
		}
		else
			inp[i] = tmp;
	}
}
