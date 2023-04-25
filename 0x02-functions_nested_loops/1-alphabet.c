#include<stdio.h>
#include"main.h"

/**
* main - Entry Point
* Description - prints the alphabet, in lowercase, followed by a new line.
* Return: void
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

}
