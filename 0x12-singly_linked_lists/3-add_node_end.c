#include "lists.h"

/**
 * add_node_end - adds new node at end of list
 * @head: pointer to head of list
 * @str: string to be added
 * Return: if function fails - NULL
 *         else - address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_char;
	int len;
	list_t *new, *old;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new_char = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = new_char;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;


	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
