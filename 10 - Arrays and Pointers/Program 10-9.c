/* Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLA
based function to copy it to a second two-dimensional array. Also provide a VLA-based 
function to display the contents of the two arrays. The two functions should be capable, 
in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable 
compiler, use the traditional C approach of functions that can process an N×5 array). */


#include <stdio.h>

#define ROWS 3
#define COLUMNS 5

void cparr(double source[][COLUMNS], double target[][COLUMNS]); //Copies array content from source[] to target[]
void prarr(double source[][COLUMNS], double target[][COLUMNS]); //Displays the content of arrays source[] and target[]

int main(void)
{
	double arr[ROWS][COLUMNS] = { {2.5, 3.1, 0.6, 7.4, 9.2}, {1.8, 2.5, 3.6, 4.1, 5.2}, {8.16, 3.14, 2.12, 0.17, 5} };
	double arr2[ROWS][COLUMNS];

	cparr(arr, arr2);
	prarr(arr, arr2);
}

void cparr(double source[][COLUMNS], double target[][COLUMNS])
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLUMNS; j++)
			*(*(target + i) + j) = *(*(source + i) + j);
	}
}

void prarr(double source[][COLUMNS], double target[][COLUMNS])
{
	int x, y;
	printf("Source array contents: \n");
	for (x = 0; x < ROWS; x++)
	{
		for (y = 0; y < COLUMNS; y++)
		{
			printf("%.2lf ", *(*(source + x) + y));
		}
		printf("\n");
	}
	
	printf("Copied to array contents: \n");
	for (x = 0; x < ROWS; x++)
	{
		for (y = 0; y < COLUMNS; y++)
		{
			printf("%.2lf ", *(*(target + x) + y));
		}
		printf("\n");
	}
}