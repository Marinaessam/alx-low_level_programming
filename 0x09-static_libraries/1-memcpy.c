#include "main.h"

/**
 * _memcpy - copies the(n) bytes from memory area
 * @dest: pointer to memory area
 * @src: pointer to source
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
