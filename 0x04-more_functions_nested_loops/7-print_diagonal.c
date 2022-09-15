#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times \ is printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int k, j;

	for (k = 0; k < n; k++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (k < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
