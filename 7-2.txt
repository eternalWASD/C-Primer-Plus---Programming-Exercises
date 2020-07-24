#include <stdio.h>
#include <ctype.h>

#define RANGE 8

int main(void)
{
	char ch;
	int count = 0;

	printf("Please enter your characters:\n");
	while ((ch = getchar()) != '#')
	{
		if (isalpha(ch))
		{
			count++;
			printf("%c-%d ", ch, ch);

			if (count % RANGE == 0)
				printf("\n");
		}
		else
		{
			continue;
		}
	}

	return 0;
}

