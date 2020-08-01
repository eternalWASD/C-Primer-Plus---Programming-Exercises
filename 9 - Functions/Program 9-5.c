/* Write and test a function called larger_of() that replaces the contents of two double
variables with the maximum of the two values. For example, larger_of(x,y) would 
reset both x and y to the larger of the two. */


#include <stdio.h>

double larger_of(double * a, double * b);

int main(void)
{
	double a = 22.7;
	double b = 14.55;
	printf("Numbers entered: a - %.2lf b - %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("Numbers now: a - %.2lf b - %.2lf\n", a, b);
	return 0;
}

double larger_of(double * a, double * b)
{
	double temp = (*a > *b) ? *a : *b;
	*a = temp;
	*b = temp;
	return 0;
}