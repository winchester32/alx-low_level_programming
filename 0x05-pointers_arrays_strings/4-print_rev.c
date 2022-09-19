#include "main.h"

/**
 * print_rev - prints a string in reverse and a new line
 * @s: pointer to a string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
