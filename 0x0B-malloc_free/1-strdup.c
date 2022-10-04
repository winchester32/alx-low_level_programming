#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer
 * @str: string to be copied
 * Return: if str == NULL - insufficient memory
 * else - a pointer
 */
char *_strdup(char *str)
{
	int len, i;
	char *d;

	len = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	d = malloc(sizeof(char) * len);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		d[i] = str[i];
	}

	return (d);
}
