#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - 1-the sentence should be printed before the main
 *
 * 2-the function should be executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
