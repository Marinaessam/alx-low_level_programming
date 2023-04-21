#include<stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabet in reverse, followed by a new line.
 * Return: 0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
