#include "main.h"

/**
 * get_endianness - type it in oreder to check,
 * a machine is little or big endian
 * Return: return with 0 if big, 1 if was little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
