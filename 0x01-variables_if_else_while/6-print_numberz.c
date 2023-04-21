#include<stdio.h>

/**
 * main - Entry point
 * Description:  print the last digit of the number stored in the variable n
 * Return: 0
*/

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
