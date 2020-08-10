/* Write a program that prompts the user to enter three sets of five double numbers each. 
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The 
program should accomplish all of the following: 
	a. Store the information in a 3×5 array. 
	b. Compute the average of each set of five values. 
	c. Compute the average of all the values. 
	d. Determine the largest value of the 15 values. 
	e. Report the results. 
Each major task should be handled by a separate function using the traditional C 
approach to handling arrays. Accomplish task “b” by using a function that computes 
and returns the average of a one-dimensional array; use a loop to call this function three 
times. The other tasks should take the entire array as an argument, and the functions 
performing tasks “c” and “d” should return the answer to the calling program. */

#include <stdio.h>

#define ROWS 3 
#define COLUMNS 5

void readarr(double arr[][COLUMNS]);
void avgof5(double arr[][COLUMNS]);
void avgall(double arr[][COLUMNS]);
void lvalue(double arr[][COLUMNS]);
void arr_report(double arr[][COLUMNS]);

int main(void)
{
	double arr[ROWS][COLUMNS];
	arr_report(arr);
	return 0;
}

void readarr(double arr[][COLUMNS])
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		printf("Enter 5 numbers of set #%d: ", i + 1);
		for (j = 0; j < COLUMNS; j++)
			scanf("%lf", &arr[i][j]);
	}
}

void avgof5(double arr[][COLUMNS])
{
	int a, b;
	double total = 0.0;
	for (a = 0; a < ROWS; a++)
	{
		for (b = 0; b < COLUMNS; b++)
			total += arr[a][b];
		printf("Average value of set #%d - %.2lf\n", a + 1, total / COLUMNS);
		total = 0;
	}
}

void avgall(double arr[][COLUMNS])
{
	int a, b;
	double total = 0.0;
	for (a = 0; a < ROWS; a++)
	{
		for (b = 0; b < COLUMNS; b++)
			total += arr[a][b];
	}
	printf("Overall average value of sets - %.2lf\n", (total / (ROWS * COLUMNS)));
}

void lvalue(double arr[][COLUMNS])
{
	int i, j;
	double lvalue;
	lvalue = arr[0][0];
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLUMNS; j++)
			lvalue = (lvalue < arr[i][j]) ? arr[i][j] : lvalue;
	}
	printf("Largest value among all items is - %.2lf\n", lvalue);
}

void arr_report(double arr[][COLUMNS])
{
	readarr(arr);
	avgof5(arr);
	avgall(arr);
	lvalue(arr);
}