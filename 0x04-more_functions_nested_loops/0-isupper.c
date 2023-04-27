#include<stdio.h>
#include"main.h"

/**
* _isupper: uppercase letters
* @c: The charachter
* Return: 1 if uppercase , otherwise :0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
