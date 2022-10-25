#include "lists.h"

/**
 * add_node - adds new node at stat of node
 * @head: pointer to head of list
 * @str: string to be added
 * Return: if function fals - NULL
 *         else - sddress of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *new_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = new_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
