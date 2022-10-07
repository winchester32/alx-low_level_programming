#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: elements of an array
 * @size: size of an element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
