#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory that allocated.
  * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
