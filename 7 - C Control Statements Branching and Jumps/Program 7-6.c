/* Write a program that reads input up to # and reports the number of times that the 
sequence ei occurs. */


#include <stdio.h>

int main(void)
{
	char ch;
	int ei_count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			ch = getchar();
			if (ch == 'i')
				ei_count++;
		}
	}
	printf("Number of ei's entered is %d", ei_count);
}