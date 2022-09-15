#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int q, w;

	for (q = 0; q < size; q++)
	{
		for (w = 1; w < (size - q); w++)
			_putchar(' ');
		for (w--; w < size; w++)
			_putchar(35);
		if (q < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
