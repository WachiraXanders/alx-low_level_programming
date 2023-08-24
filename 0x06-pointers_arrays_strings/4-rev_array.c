#include "main.h"

/**
 *reverse_array - Reverses the contents of arrays.
 *@a: Pointer to the array of integers.
 *@n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j ; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
