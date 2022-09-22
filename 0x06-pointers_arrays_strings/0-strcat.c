#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the string to append to @dest
 * @dest: destination string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int k = 0;
	int p = 0;

	while (dest[k++])
		p++;
	for (k = 0; src[k]; k++)
		dest[p++] = src[k];
	return (dest);
}
