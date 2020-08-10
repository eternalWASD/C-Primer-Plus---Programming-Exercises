/* Use a copy function from Programming Exercise 2 to copy the third through fifth 
elements of a seven-element array into a three-element array. The function itself need not be altered; 
just choose the right actual arguments. (The actual arguments need not be 
an array name and array size. They only have to be the address of an array element and a 
number of elements to be processed.)*/


#include <stdio.h>

#define ARRSIZE 10

void copy_arr(double target[], double source[], int number);

int main(void)
{
	double arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	double target1[3];
	copy_arr(target1, &arr[2], 3);
	for (int i = 0; i < 3; i++)
		printf("%.2lf ", target1[i]);
}

void copy_arr(double target[], double source[], int number)
{
	int q;
	for (q = 0; q < number; q++)
		target[q] = source[q];
}