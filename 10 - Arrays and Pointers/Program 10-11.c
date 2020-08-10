/* Write a program that declares a 3×5 array of int and initializes it to some values of
your choice. Have the program print the values, double all the values, and then display
the new values. Write a function to do the displaying and a second function to do the
doubling. Have the functions take the array name and the number of rows as arguments. */


#include <stdio.h>

#define ROWS 3
#define COLUMNS 5

void arrprint(int arr[][COLUMNS], int rows);
void doublearr(int arr[][COLUMNS], int rows);


int main(void)
{
	int arr[ROWS][COLUMNS] = { {2, 7, 14, 5, 0}, {1, 2, 3, 4, 5}, {4, 8, 15, 16, 23} };
	printf("Original array: \n");
	arrprint(arr, ROWS);
	doublearr(arr, ROWS);
	printf("Doubled array: \n");
	arrprint(arr, ROWS);
}


void arrprint(int arr[][COLUMNS], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLUMNS; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

void doublearr(int arr[][COLUMNS], int rows)
{
	int p, s;
	for (p = 0; p < rows; p++)
	{
		for (s = 0; s < COLUMNS; s++)
			arr[p][s] = arr[p][s] * 2;
	}
}