#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number
 *
 * prints if number is positive or negatie
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
