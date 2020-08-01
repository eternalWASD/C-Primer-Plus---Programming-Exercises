/* Write and test a Fibonacci() function that uses a loop instead of recursion to calculate 
Fibonacci numbers. */

#include <stdio.h>

void Fibonacci(int n);

int main(void)
{
	int entry;

	printf("Enter the desired integer: ");
	scanf("%d", &entry);
	Fibonacci(entry);
}

void Fibonacci(int n)
{
	int number1, number2, number3, counter;
	number1 = number2 = counter = 0;
	number3 = 1;

	printf("The Fibonacci series up to your number %d are: \n", n);
	while (number1 < n)
	{
		printf("%d ", number1);
		number1 = number2 + number3;
		if (counter % 2 == 0)
			number2 = number1;
		else
			number3 = number1;;
		counter++;
	}
}
