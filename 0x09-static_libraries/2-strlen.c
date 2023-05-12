#include "main.h"

/**
 * _strlen - checks the length of a string.
 * @s:string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
