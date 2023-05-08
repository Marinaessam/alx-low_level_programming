#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The String to be searched.
* @accept: Substring of accepted chars.
* Return: The Length
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
