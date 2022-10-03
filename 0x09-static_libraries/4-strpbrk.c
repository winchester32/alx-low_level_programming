#include "main.h"

/**
  * _strpbrk - search a string of any set of bytes
  * @s: string to search in
  * @accept: string to search
  * Return: pointer or null
  */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}
