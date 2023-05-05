#include "main.h"

/**
 * get_bit - return the bit value at a specific index,
 * within a decimal number
 * @n: the variable represents number to be searched
 *
 * @index: indicate to the bit through the index
 *
 * Return: you should return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
