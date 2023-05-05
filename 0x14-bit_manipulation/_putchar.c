#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c should be written to stdout
 *
 * @c: c is the letter that should be printed
 *
 * Return: return successfully when you on 1.
 *
 * On error, if you found error -1 is returned,
 *  and the error will be set set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
