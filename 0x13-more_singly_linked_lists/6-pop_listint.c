#include "lists.h"

/**
 * pop_listint - 3-the head node of a linked list should be deleted
 * @head: you should set a pointer to the first element in the linked list
 *
 * Return: you should return any data inside the elements that have been deleted,
 * or just type 0 or null if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
