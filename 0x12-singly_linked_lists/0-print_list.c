#include "lists.h"

/**
 * print_list - prints all numbers of list_t list
 * @h: the list
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}

	return (node);
}
