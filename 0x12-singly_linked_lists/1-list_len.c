#include <stdlib.h>
#include "lists.h"

/**
 * list_len - 1-should return to the numbers of the elements in the linked list
 *
 * @h: 2-should point to the list_t of list
 *
 * Return: the numbers of the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
