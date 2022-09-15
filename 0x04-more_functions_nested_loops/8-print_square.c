#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int d, p;

	if (size > 0)
	{
		for (d = size; d > 0; d--)
		{
			for (p = size; p > 0; p--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
