#include <stdio.h>
#include <ctype.h>
/**
 * main-
 *
 * sth
 *
 * Return: 0
 */
int main (void)
{
	char ch;
	for (ch ='A' ; ch <= 'Z' ; ch++) {
		putchar(tolower(ch));
	}
	return(0);
}
