#include "lists.h"

/**
 * print_listint - every elements of each linked list must be printed
 *
 * @h: each and every linked list of type listint_t must be printed
 *
 * Return: all you have to return is the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
