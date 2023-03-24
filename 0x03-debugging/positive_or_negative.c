#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative  - entry point
 * Description: false or true validation
 *@i : integer
 * Return: 0 (success)
*/

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);

}
