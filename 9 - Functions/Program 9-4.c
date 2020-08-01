/* The harmonic mean of two numbers is obtained by taking the inverses of the two
numbers, averaging them, and taking the inverse of the result. Write a function that
takes two double arguments and returns the harmonic mean of the two numbers. */


#include <stdio.h>

float harmonic_mean(float i, float j);

int main(void)
{
	float i, j;

	printf("Enter two numbers: ");
	while (scanf("%f %f", &i, &j) == 2)
	{
		printf("The harmonic mean of %.2f and %.2f is %.2f.\n", i, j, harmonic_mean(i, j));
	}
	return 0;
}

float harmonic_mean(float i, float j)
{
	return 1 / ((1 / i + 1 / j) / 2);
}