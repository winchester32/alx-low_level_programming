#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array that contains program line arguments
 * Return: 0 - success
 * else 1 - fail
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i\n", (a * b));
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
