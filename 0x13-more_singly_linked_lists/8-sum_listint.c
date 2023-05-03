#include "lists.h"

/**
 * sum_listint - sum of all the data in a listint_t list must be calculated 
 *
 * @head: set the head to be thefirst node in the linked list
 *
 * Return: return the result of the sum 
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
