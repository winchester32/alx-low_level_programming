#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string to print
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
}
