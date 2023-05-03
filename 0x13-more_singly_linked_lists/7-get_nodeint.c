#include "lists.h"

/**
 * get_nodeint_at_index - node must be returned to certain index in,
 * the linked list
 * @head: set the head to be the first node in the linked list
 *
 * @index: assign the index of the node to be returned
 *
 * Return: set the pointer to be returned to the node we're looking for
 * , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
