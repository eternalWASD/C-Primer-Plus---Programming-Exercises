/* Write a program that reads input as a stream of characters until encountering EOF . 
Have it report the number of uppercase letters, the number of lowercase letters, and the 
number of other characters in the input. You may assume that the numeric values for the 
lowercase letters are sequential and assume the same for uppercase. Or, more portably, 
you can use appropriate classification functions from the ctype.h library. */


#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int lower, upper, other;
	lower = upper = other = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			lower++;
		else if (isupper(ch))
			upper++;
		else
			other++;
	}
	printf("You have entered %d lowercase characters,\n", lower);
	printf("You have entered %d uppercase characters,\n", upper);
	printf("You have entered %d other characters,\n", other);
}