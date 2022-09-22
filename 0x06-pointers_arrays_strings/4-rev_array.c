#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int k, l;

	for (l = n - 1; l >= n / 2; l--)
	{
		k = a[n - 1 - l];
		a[n - 1 - l] = a[l];
		a[l] = k;
	}
}
