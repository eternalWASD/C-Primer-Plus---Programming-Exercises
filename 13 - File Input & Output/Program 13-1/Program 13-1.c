/* Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user’s 
response instead of using command-line arguments. */

#include <stdio.h>
#include <stdlib.h> // exit() prototype

int main(void)
{
    int ch;   // place to store each character as read
    FILE *fp; // "file pointer"
    unsigned long count = 0;
    char * filename;
    printf("Enter file name: ");
    if (scanf("%s", filename) != 1)
    {
        puts("Error opening file");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout); // same as putchar(ch);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);
    return 0;
}
