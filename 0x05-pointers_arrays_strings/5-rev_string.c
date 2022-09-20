#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer of a string
 * Return: 0
 */
void rev_string(char *s)
{
	int k, index = 0;
	char str[1000000];

	for (k = 0; s[k] != '\0'; k++)
	{
		str[k] = *(s + k);
	}

	k--;

	for (; k >= 0; k--)
	{
		*(s + index) = *(str + k);
		index++;
	}

	k++;
}
