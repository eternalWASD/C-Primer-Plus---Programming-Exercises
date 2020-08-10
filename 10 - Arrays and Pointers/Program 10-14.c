/* Do Programming Exercise 13, but use variable-length array function parameters. */

//Whoops, already done in #13

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