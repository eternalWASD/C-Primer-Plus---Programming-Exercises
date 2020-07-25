/* Write a program that accepts a positive integer as input and then displays all the prime 
numbers smaller than or equal to that number. */


#include <stdio.h>

int isprime(int i);

int main(void)
{
	int n;

	printf("Enter a positive integer:\n");
	scanf("%d", &n);

	printf("Your prime numbers up to %d: \n", n);
	for (int i = 2; i <= n; i++)
		if (isprime(i))
			printf("%d ", i); 
}

int isprime(int i) 
{
	for (int j = 2; j * j <= i; j++)
	{
		if (i % j == 0)
			return 0;  
		else
			continue;
	}
	return 1;
}