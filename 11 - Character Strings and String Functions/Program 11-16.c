/* Write a program that reads input until end-of-file and echoes it to the display. 
Have the program recognize and implement the following command-line arguments: 
-p   -   Print input as is 
-u   -   Map input to all uppercase  
-l   -   Map input to all lowercase 
Also, if there are no command-line arguments, let the program behave 
as if the –p argument had been used. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{ 
    int stringlen = strlen(argv[2]);

    if (argc > 3)
        printf("Usage: %s [-p | -u | -l] <input>", argv[0]);
    else if(argc == 3 && argv[1][0] != '-')
        printf("Usage: %s [-p | -u | -l] <input>", argv[0]);
    
    switch (argv[1][1])
    {
    case 'p':
        puts(argv[2]);
        break;
    case 'u':
        for (int i = 0; i < stringlen; i++)
            putchar(toupper(argv[2][i]));
        puts("\n");
        break;
    case 'l':
        for (int i = 0; i < stringlen; i++)
            putchar(tolower(argv[2][i]));
        puts("\n");
        break;
    default:
        puts(argv[2]);
        break;
    }
}