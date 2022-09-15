#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: checks for input function
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
