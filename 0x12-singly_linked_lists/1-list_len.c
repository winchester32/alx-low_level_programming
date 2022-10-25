#include "lists.h"

/**
 * list_len - finds number of elements of list
 * @h: linked list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}
	return (list);
}
