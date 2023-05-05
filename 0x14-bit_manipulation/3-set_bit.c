#include "main.h"

/**
 * set_bit - Sets the corresponding bit to 1, at a certain index
 * @n: veriable that Sets the bit at a specified index to 1
 *
 * @index: the index of the bit must be to set to 1
 *
 * Return: 1 should be returned if you succeed,if not return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
