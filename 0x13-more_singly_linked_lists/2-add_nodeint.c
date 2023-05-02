#include "lists.h"

/**
 * add_nodeint - if you want to add new node at the beginning of a linked list
 *
 * @head: you should set pointer to the first node in the list
 *
 * @n: the varient is the data must be insert in that new node
 *
 * Return: set the pointer to the new node, or NULL if it didn't work
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
