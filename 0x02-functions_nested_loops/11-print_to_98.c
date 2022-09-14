#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	int k;

	if (n > 98)
		for (k = n; k > 98; --k)
			printf("%d, ", k);
	else
		for (k = n; k < 98; ++k)
			printf("%d, ", k);
		printf("98\n");
}
