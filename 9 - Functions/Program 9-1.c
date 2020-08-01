/* Devise a function called min(x, y) that returns the smaller of two double values.Test
the function with a simple driver. */

#include <stdio.h>

int min(x, y);

int main(void)
{
	printf("%d\n", min(2, 4));
}

int min(x, y)
{
	return (x > y) ? y : x;
}