#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers of arguments passed to it'
 * @argc: Takes the count number
 * @argv: Takes the array numbers
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
