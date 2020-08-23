/* Write a function that replaces the contents of a string with the string reversed. Test the 
function in a complete program that uses a loop to provide input values for feeding to 
the function. */

#include <stdio.h>
#include <string.h>

#define LIMIT 50

void reverse_str(char* str);

int main(void)
{
    char str[LIMIT];
    printf("Enter string to reverse: ");
	fgets(str, sizeof(str), stdin);
    while (*str != '\0')
        {
            reverse_str(str);
            printf("Reversed string: %s\n", str);
            
            printf("Enter another string to reverse: ");
            fgets(str, sizeof(str), stdin);
        }
    return 0;
}

void reverse_str(char* str)
{
    int len = strlen(str);
    int index = 0;
    char *start_ptr, *end_ptr, temp;

    start_ptr = str;
    end_ptr = str + len - 1;

    for (index = 0; index < len / 2; index++) 
    {
        temp = *end_ptr;
        *end_ptr = *start_ptr;
        *start_ptr = temp;

        start_ptr++; 
		end_ptr--;
    }
}