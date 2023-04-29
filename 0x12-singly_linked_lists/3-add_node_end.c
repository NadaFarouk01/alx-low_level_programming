#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - 1-new node must be added by the end of the linked list
 *
 * @head: the pointer should be doubled on the list_t of list
 *
 * @str: 2-string so we can put in a new node
 *
 * Return: should return to address of anew element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
