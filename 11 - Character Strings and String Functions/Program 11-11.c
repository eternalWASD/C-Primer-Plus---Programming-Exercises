/* Write a program that reads in up to 10 strings or to EOF, whichever comes first. Have it 
offer the user a menu with five choices: print the original list of strings, print the strings 
in ASCII collating sequence, print the strings in order of increasing length, print the 
strings in order of the length of the first word in the string, and quit. Have the menu 
recycle until the user enters the quit request. The program, of course, should actually 
perform the promised tasks. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ROWS 10
#define LIMIT 100

char* getstr(char *str[]);
void print_strs(char *str[]);
void sort_ASCII(char *str[]);
void sort_length(char *str[]);
int fwlen(char *str);
void sort_firstword_length(char *str[]);
void print_menu();


int main(void)
{
    int j = 0;
    char str[ROWS][LIMIT];
    char *strptrs[ROWS];
    char * tmp_str;
    char ch;

    for (int x = 0; x < ROWS; x++)
    {
        strptrs[x] = str[x];
    }

	printf("Enter 10 strings: \n");

    for (int i = 0; i < ROWS; i++)
	{
		printf("String #%d: ", i + 1);
		tmp_str = getstr(str[i]);

		if (!tmp_str)
			break;
	}
    printf("\n");
    print_menu();

    while ((ch = getchar()) != 'q')
	{
		if (ch != '\n')
			while (getchar() != '\n')
				continue;

		switch (ch)
		{
			case ('a'):
				print_strs(strptrs);
				break;
			case ('b'):
				sort_ASCII(strptrs);
				break;
			case ('c'):
				sort_length(strptrs);
				break;
			case ('d'):
				sort_firstword_length(strptrs);
                break;
            case ('q'):
                break;
			default:
				printf("Invalid input. Try again.\n\n");
				print_menu();
        }

		puts("");
		for (int i = 0; i < ROWS; i++)
			puts(strptrs[i]);

		puts("");
		print_menu();
    }

	return 0;
}

char* getstr(char *str[])   // wrapper for fgets that replaces newline with null
{
	
	char *return_value = fgets(str, LIMIT, stdin);	

	while (*str != '\0')
	{
		if (*str == '\n')
		{
			*str = '\0';
			break;
		}

		str++;
	}

	return return_value;
}

void print_strs(char *str[])

{
    int j = 0;
    for (; j < ROWS; j++)
        printf("%s\n", str[j]);
}

void sort_ASCII(char *str[])
{   

    char *tmp;

    for (int i = 0; i < ROWS - 1; i++)
		for (int j = i + 1; j < ROWS; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
}

void sort_length(char *str[])
{
    char *tmp;

	for (int i = 0; i < ROWS - 1; i++)
		for (int j = i + 1; j < ROWS; j++)
		{
			if (strlen(str[i]) > strlen(str[j]))
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
}

int fwlen(char *str) // returns length of first word of str
{
	int length = 0;

	// skip leading whitespace
	while (isspace(*str))
		str++;

	// count first word length
	while(!isspace(*str))
	{
		length++;
		str++;
	}

	return length;
}

void sort_firstword_length(char *str[])
{
    char *tmp;

	for (int i = 0; i < ROWS - 1; i++)
		for (int j = i + 1; j < ROWS; j++)
		{
			if (fwlen(str[i]) > fwlen(str[j]))
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
        }       
}

void print_menu()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired action:\n");
	printf("a) print the original list of strings\n");
    printf("b) print the strings in ASCII collating sequence\n");
	printf("c) print the strings in order of increasing length\n"); 
    printf("d) print the strings in order of the length of the first word in the string\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
}