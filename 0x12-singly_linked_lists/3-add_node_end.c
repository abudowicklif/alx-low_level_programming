#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *st;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	st = malloc(sizeof(list_t));
	if (!st)
		return (NULL);

	st->str = strdup(str);
	st->len = len;
	st->next = NULL;

	if (*head == NULL)
	{
		*head = st;
		return (st);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = st;

	return (st);
}
