#include <stdio.h>

int main(void)
{
	char ch;
	int sc = 0; // Space characters count
	int nc = 0; // Newline characters count
	int oc = 0; // Other characters count

	printf("Enter your characters:\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			sc++;
		else if (ch == '\n')
			nc++;
		else
			oc++;
	}

	printf("Number of space characters entered: %d\n", sc);
	printf("Number of newline characters entered: %d\n", nc);
	printf("Number of other characters entered: %d\n", oc);

	return 0;
}