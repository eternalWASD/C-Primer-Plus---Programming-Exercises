/* Write a program that initializes a two-dimensional array-of- double and uses one of the 
copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a 
two-dimensional array is an array of arrays, a one-dimensional copy function can be used 
with each subarray.) */


#include <stdio.h>

#define ARRSIZE 10

void copy_arr(double target[][ARRSIZE], double source[][ARRSIZE], int number);

int main(void)
{
	double arr[2][ARRSIZE] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {7, 6, 12, 73, 77, 0, 0, 5, 3, 12} };
	double arr2[ARRSIZE][ARRSIZE];	
	copy_arr(arr2, arr, ARRSIZE);
	for (int x = 0; x < 2; x++)
	{
		printf("Copied subarray elements #%d: ", x + 1);
		for (int y = 0; y < ARRSIZE; y++)
			printf("%.2lf ", arr2[x][y]);
		printf("\n");
	}  
	
}

void copy_arr(double target[][ARRSIZE], double source[][ARRSIZE], int number)
{
	int i, j;
	for (i = 0; i < number; i++)
	{ 
		for (j = 0; j < number; j++)
			*(*(target + i) + j) = *(*(source + i) + j);
	}
}