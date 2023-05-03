#include "lists.h"

/**
 * free_listint2 - 2-the linked list must be freed
 * @head: you  should  set a pointer to the listint_t list to be freed 
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
