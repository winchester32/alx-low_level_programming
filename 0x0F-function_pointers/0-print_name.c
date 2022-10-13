#include "function_pointers.h"
#include <stdio.h>

/**
 * prime_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
