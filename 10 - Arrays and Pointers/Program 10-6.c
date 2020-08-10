/* Write a function that reverses the contents of an array of double and test it in a simple 
program. */


#include <stdio.h>

#define ARRSIZE 10

void reverse(double arr[]);

int main(void)
{
	double arr[ARRSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	reverse(arr);
	for (int j = 0; j < ARRSIZE; j++)
		printf("%.2lf ", arr[j]);
}

void reverse(double arr[])
{
	double temp;

	for (int k = 0; k < ARRSIZE / 2; k++)
	{
		temp = *(arr + k);
		*(arr + k) = *(arr + ARRSIZE - k - 1);
		*(arr + ARRSIZE - k - 1) = temp;
	}
}