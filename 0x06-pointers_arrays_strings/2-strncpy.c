#include "main.h"

/**
 * _strncpy - copies from string to dest
 * @dest: stores string copy
 * @src: source string
 * @n: maximum number to be copied
 * Return: pointer resulting street
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = b; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
