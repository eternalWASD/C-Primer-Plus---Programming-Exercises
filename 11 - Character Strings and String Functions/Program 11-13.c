/* Write a program that echoes the command-line arguments in reverse word order. That 
is, if the command-line arguments are see you later, the program should print later 
you see. */

#include <stdio.h>

void reverse_arg_words(char* args[], int arglen);
void print_reversed(char* args[], int arglen);

int main(int argc, char *argv[])
{
    reverse_arg_words(argv, argc);
    print_reversed(argv, argc);
    return 0;
}

void reverse_arg_words(char* args[], int arglen)
{
    char *tmp; 
    int j = arglen - 1; 
    for (int i = 0; i < j; i++) 
    { 
        tmp = args[i]; 
        args[i] = args[j]; 
        args[j] = tmp; 
        j--; 
    }

}

void print_reversed(char* args[], int arglen)
{
    for (int i = 0; i < arglen - 1; i++) { 
        printf("%s ", args[i]); 
    } 
    puts("\n");
}