#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node should be added at a beginning of each linked list
 *
 * @head: must double the pointer to a list_t of list
 * @str: new string should be added to the node
 *
 * Return: the address should be returned to a new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
