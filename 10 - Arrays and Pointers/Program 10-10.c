/* Write a function that sets each element in an array to the sum of the corresponding 
elements in two other arrays. That is, if array 1 has the values 2, 4, 5, and 8 and array 2 
has the values 1, 0, 4, and 6, the function assigns array 3 the values 3, 4, 9, and 14. The 
function should take three array names and an array size as arguments. Test the function 
in a simple program. */


#include <stdio.h>

#define ARRSIZE 6

void sumassign(int arr1[], int arr2[], int arr3); //Assigns element i of arr3 to sum of corresponding
						  //elements of arr1 and arr2


int main(void)
{
	int i;
	int arr1[ARRSIZE] = {7, 8, 2, 5, 12, 4};
	int arr2[ARRSIZE] = {3, 0, 4, 2, 1, 15};
	int arr3[ARRSIZE];
	sumassign(arr1, arr2, arr3);
	printf("Your new array of sums: ");
	for (i = 0; i < ARRSIZE; i++)
	{
		printf("%d ", arr3[i]);
	}
}


void sumassign(int arr1[], int arr2[], int arr3[])
{
	int i;
	for (i = 0; i < ARRSIZE; i++)
		*(arr3 + i) = (*(arr1 + i) + *(arr2 + i));
}