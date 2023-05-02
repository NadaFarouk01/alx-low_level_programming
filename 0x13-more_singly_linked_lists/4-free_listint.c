#include "lists.h"

/**
 * free_listint - 1-the linked list must be freed
 *
 * @head: ypu must work on freeing listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
