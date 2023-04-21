#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description:  print the last digit of the number stored in the variable n
 * Return: 0
*/

int main(void)
{
	int digit = 0

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}

	return (0);
}
