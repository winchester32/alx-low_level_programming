#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: checks input for function
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
