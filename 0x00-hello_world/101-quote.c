#include <stdio.h>
/**
 * main - entry point
 *
 * description: 'main -void'
 *
 * Return: 1
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(2, str1, 59);
	return (1);
}
