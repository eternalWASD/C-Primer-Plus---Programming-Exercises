/* Write a function that returns the difference between the largest and smallest elements of 
an array-of- double. Test the function in a simple program */


#include <stdio.h>

#define ARRSIZE 10

double arr_lvalue(double arr[], int arr_size);
double arr_svalue(double arr[], int arr_size);
double arr_difference(double lvalue, double svalue);

int main(void)
{
	double arr[ARRSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr_size = *(&arr + 1) - arr;
	printf("The difference between the largest and smallest elements ");
	printf("of an array: %.2lf", arr_difference(arr_lvalue(arr, arr_size), \
		arr_svalue(arr, arr_size)));
}

double arr_lvalue(double arr[], int arr_size)
{
	int i;
	double lvalue;
	lvalue = arr[0];
	for (i = 0; i < arr_size; i++)
		lvalue = (lvalue < arr[i]) ? arr[i] : lvalue;
	return lvalue;
}

double arr_svalue(double arr[], int arr_size)
{
	int i;
	double svalue;
	svalue = arr[0];
	for (i = 0; i < arr_size; i++)
		svalue = (svalue > arr[i]) ? arr[i] : svalue;
	return svalue;
}

double arr_difference(double lvalue, double svalue)
{
	return lvalue - svalue;
}