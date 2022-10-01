#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
