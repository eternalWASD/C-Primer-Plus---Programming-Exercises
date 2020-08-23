/* Use the character classification functions to prepare an implementation of atoi(); have 
this version return the value of 0 if the input string is not a pure number. */

#include <stdio.h>
#include <ctype.h>

int atoi(char *str);

int main(int argc, char *argv[])
{
    int number = 0;

    if (argc != 2)
    {
        puts("Usage: <program_name> <string of numbers>");
        return 1;
    }
    else
    {
        number = atoi(argv[1]);
        printf("%d * 2 = %d\n", number, number * 2);
        printf("%d / 4 = %d\n", number, number / 4);
        printf("%d + 15 = %d\n", number, number + 15);
    }

    return 0;
}

int atoi(char *str)
{
    int result = 0;

    while (*str != '\0')
    {
        if (!isdigit(*str))
            puts("Argument must be a pure number");
        else
        {
            result *= 10;
            result += *str - '0';
        }
        str++;
    }
    return result;
}