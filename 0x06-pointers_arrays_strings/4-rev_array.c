#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: A pointer of array.
 * @n: Integar.
*/

void reverse_array(int *a, int n)
{
	int c;
	int b;

	c = 0;
	while (c < n)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
		c++;
	}
}
