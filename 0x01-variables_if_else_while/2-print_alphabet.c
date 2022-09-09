#include <stdio.h>
#include <ctype.h>
/**
 * main - entry
 *
 * prints the alphabet to lower case
 *
 * Return: 0
 */
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
