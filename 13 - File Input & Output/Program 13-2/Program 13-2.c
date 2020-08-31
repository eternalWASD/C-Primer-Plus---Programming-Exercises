/* Write a file-copy program that takes the original filename and the copy file from the 
command line. Use standard I/O and the binary mode, if possible. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *sf, *df; //*sf - source file *df - destination file 
    char ch;
    
    if ((sf = fopen(argv[1], "rb")) == NULL)
    {
        printf("Error reading source file: %s", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((df = fopen(argv[2], "wb")) == NULL)
    {   
        printf("Error writing to file: %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(sf)) != EOF)
        putc(ch, df);

    fclose(sf);
    fclose(df);
    return 0;
}