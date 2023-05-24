#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - contain your main function only
  * @argc: number of Argument
  * @argv: array of arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
