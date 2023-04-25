#include<stdio.h>
#include"main.h"

/**
* main - Entry Point
* Description - prints the alphabet, in lowercase, followed by a new line.
* Return: 0
*/

void print_alphabet(void);
{
    char letter = 'a';

        while (letter <= 'z')

        {
                _putchar (letter);
                letter++
        }
	_putchar('\n');

	return (0);
}
