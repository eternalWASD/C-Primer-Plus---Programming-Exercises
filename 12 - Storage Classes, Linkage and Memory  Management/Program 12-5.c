/* Write a program that generates a list of 100 random numbers in the range 1–10 
in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11 , 
“Character Strings and String Functions,” to type int. In this case, just sort the numbers 
themselves.) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum(void);

int cmpfunc(const void *a, const void *b);

int main(void)
{
    int arr[100];
    srand((unsigned int) time(0));

    for (int i = 0; i < 100; i++)
        arr[i] = randnum();
    qsort(arr, 100, sizeof(int), cmpfunc);
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != arr[i - 1])
            printf("\n");
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int randnum(void)
{
    return (rand() % 10 + 1);
}

int cmpfunc(const void *a, const void *b)
{
    return (*(int*)b - *(int*)a);   
}