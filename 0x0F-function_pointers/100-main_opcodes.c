#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * @argc: operand
 * @argv: operand
 * Description: opcodes in hexadecimal
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < j - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

