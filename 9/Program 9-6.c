/* Write and test a function that takes the addresses of three double variables as arguments 
and that moves the value of the smallest variable into the first variable, the middle value 
to the second variable, and the largest value into the third variable. */


#include <stdio.h>

double larger_of(double * a, double * b, double * c);

int main(void)
{
	double a = 22.7;
	double b = 14.55;
	double c = 12.22;
	printf("Numbers entered: a - %.2lf b - %.2lf c - %.2lf\n", a, b, c);
	larger_of(&a, &b, &c);
	printf("Numbers sorted: a - %.2lf b - %.2lf c - %.2lf\n", a, b,c);
	return 0;
}

double larger_of(double * a, double * b, double * c)
{
	double lowest = ((*a < *b) && (*a < *c)) ? *a : ((*b < *a) && (*b < *c)) ? *b : *c;
	double highest = ((*a > *b) && (*a > *c)) ? *a : ((*b > *a) && (*b > *c)) ? *b : *c;
	double average = ((*a > lowest) && (*a < highest)) ? *a : ((*b > lowest) && (*b < highest)) ? *b : *c;
	*a = lowest;
	*c = highest;
	*b = average;
	return 0;
}