/* Write and test in a loop a function that returns the number of times it has been called. */

#include <stdio.h>

void count_calls(void);

int main(void)
{
    for (int i = 0; i <= 100; i++)
        count_calls();
    return 0;
}

void count_calls(void)
{
    static int calls = 0;
    printf("Call #%d\n", calls++);
}