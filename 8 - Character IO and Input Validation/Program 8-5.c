/* Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing 
strategy. For example, have the program initially guess 50, and have it ask the user 
whether the guess is high, low, or correct. If, say, the guess is low, have the next guess 
be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be 
halfway between 75 and 50, and so on. Using this binary search strategy, the program 
quickly zeros in on the correct answer, at least if the user does not cheat. */



#include <stdio.h>
#include <string.h>

int main(void)
{
	int guess = 50;
	char ch[10];

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);

	
	while (scanf("%s", ch) == 1)
		if (strcmp(ch, "correct") != 0)
		{
			if (strcmp(ch, "low") == 0)
			{
				guess = guess / 2;
				printf("Is your number %d?\n", guess);
				continue;
			}
			else if (strcmp(ch, "high") == 0)
			{
				guess = ((2 * guess) - (guess / 2));
				printf("Is your number %d?\n", guess);
				continue;
			}
			
		}
		else
		{
			printf("I knew I could do it!\n");
			break;
		}
}
