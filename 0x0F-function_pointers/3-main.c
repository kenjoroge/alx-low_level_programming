#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int m, w;
	char v;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	m = atoi(argv[1]);
	w = atoi(argv[3]);
	v = *argv[2];

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if ((v == '/' || v == '%') && w == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(m, w));
	return (0);
}

