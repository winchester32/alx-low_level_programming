#include "main.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*haystack != '\0' && *need != '\0' && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (hay);
		haystack = hay + 1;
	}

	return (0);

}
