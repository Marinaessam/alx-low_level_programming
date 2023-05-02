#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * @a: first integer.
 * @b: second integer.
 */

void swap_int(int *a, int *b)
{
	int j;

	j = 0;
	j = *a;
	*a = *b;
	*b = j;
}
