#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *dump;

	while (head)
	{
		dump = head->next;
		free(head->str);
		free(head);
		head = dump;
	}
}
