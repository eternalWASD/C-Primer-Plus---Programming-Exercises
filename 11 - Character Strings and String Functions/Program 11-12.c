/* Write a program that reads input up to EOF and reports the number of words, the 
number of uppercase letters, the number of lowercase letters, the number of punctuation 
characters, and the number of digits. Use the ctype.h family of functions.  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LIMIT 100

void print_report(const char *str);

int main(void)
{
    char str[LIMIT];
    while (fgets(str, LIMIT, stdin) != NULL)
        print_report(str);

    return 0;
}

void print_report(const char *str)
{
    int i, words, uppercase, lowercase, punct_chars, digits, stringlen, inword;
    i = words = uppercase = lowercase = punct_chars = digits = inword = 0;
    stringlen = strlen(str);

    for (; i < stringlen; i++)
    {
        if (isalpha(str[i]))
        {
            if (!inword)
            {
                inword = 1;
                words++;
            }
            if (islower(str[i]))
                lowercase++;
            else if (isupper(str[i]))
                uppercase++;
        }
        else if (isspace(str[i]))
            inword = 0;
        else if (ispunct(str[i]))
            punct_chars++;
        else if (isdigit(str[i]))
            digits++;
    }

    printf("Total of words: %d\n", words);
    printf("Total of uppercase: %d\n", uppercase);
    printf("Total of lowercase: %d\n", lowercase);
    printf("Total of punctuation characters: %d\n", punct_chars);
    printf("Total of digits: %d\n", digits);
}