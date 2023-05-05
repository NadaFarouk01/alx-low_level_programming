#include "main.h"

/**
 * clear_bit - in order to clear the bit set its value to 0
 *
 * @n: variables that pointes to the number to be changed
 *
 * @index: you should clear the index of the bit
 *
 * Return: return with 1 if you succeed, -1 when failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
