#include "main.h"

/**
 * flip_bits - change the number of bits after you count it,
 * in order to jump from one number to another
 * @n: is a variable that indiates to the first number
 *
 * @m: is a variable that indicates to second number
 *
 * Return: in order to change you must return the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
