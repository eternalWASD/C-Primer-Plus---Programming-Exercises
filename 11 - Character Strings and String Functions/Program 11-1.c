/* Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is passed as an
argument. */


#include <stdio.h>

#define SIZE 5

void fetch_n(char* inp, int n);

int main(void)
{
	int j = 0;

	char arr[SIZE];
	fetch_n(&arr, SIZE);


	for (; j < SIZE; j++)
		putchar(arr[j]);

	return 0;
}

void fetch_n(char* inp, int n)
{
	int i = 0;
	printf("Enter %d characters: ", SIZE);
	for (; i < SIZE; i++)
		inp[i] = getchar();
}
