#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: The pointer to unsigned long int
 * @index: The index
 * Return: 1 if done, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
