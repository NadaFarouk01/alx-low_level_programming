#include "lists.h"

/**
 * add_nodeint_end - node should be added at the end of a linked list
 *
 * @head: you should add pointer to the first element in each list
 * @n: the varient  should be inserted in the new element
 *
 * Return: must return the pointer to the new node, or type NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
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

