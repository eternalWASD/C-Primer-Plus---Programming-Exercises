/* Write a program that reads integers until 0 is entered. After input terminates, the 
program should report the total number of even integers (excluding the 0) entered, the 
average value of the even integers, the total number of odd integers entered, and the 
average value of the odd integers. */


#include <stdio.h>

int main(void)
{
	int digit;
	int total, even, odd;
	float sum_even, sum_odd;
	digit = total = even = odd = 0;
	sum_even = sum_odd = 0.0f;

	printf("Please enter your characters:\n");

	while ((scanf("%d", &digit)) == 1 && (digit != 0))
	{
			total++;
			if ((digit % 2) == 0)
			{
				even++;
				sum_even += digit;
			}
			else
			{
				odd++;
				sum_odd += digit;
			}

	}

	printf("Number of even numbers: %d\n", even);
	printf("Average value of even numbers: %0.1f\n", sum_even / total);
	printf("Number of odd numbers: %d\n", odd);
	printf("Average value of even numbers: %0.1f\n", sum_odd / total);
}