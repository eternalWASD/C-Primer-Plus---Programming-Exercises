/* Write a function that returns the largest value stored in an array-of- int. Test the function 
in a simple program. */


#include <stdio.h>

#define ARRSIZE 10

int arr_lvalue(int arr[], int arr_size);

int main(void)
{
	int arr[ARRSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr_size = *(&arr + 1) - arr;
	printf("Largest number in your array is: %d\n", arr_lvalue(arr, arr_size));
}

int arr_lvalue(int arr[], int arr_size)
{
	int i, lvalue;
	lvalue = arr[0];
	for (i = 0; i < arr_size; i++)
		lvalue = (lvalue < arr[i]) ? arr[i] : lvalue;
	return lvalue;
}