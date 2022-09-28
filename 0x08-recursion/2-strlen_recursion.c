#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: input string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
