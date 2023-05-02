#include "lists.h"

/**
 * listint_len - each number of elements in a linked lists shoud be returned
 *
 * @h: each and every linked list of type listint_t must be traverse
 *
 * Return: all you have to return is the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
