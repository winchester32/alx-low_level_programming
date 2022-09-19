#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: value of first integer
 * @b: value of second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
