#include<stdio.h>
#include"main.h"

/**
* main - Entry Point
* Description - prints the alphabet, in lowercase, followed by a new line.
* Return: 0
*/

int main(void)
{
    char letter = 'a';

        while (letter <= 'z')

        {
                _putchar (letter);
                letter++
        }

	return (0);
}
