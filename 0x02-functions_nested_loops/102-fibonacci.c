#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 0;
	long int fib2 = 1;
	long int fib3;
	long int i = 1;

	while (i <= 50)
	{
		fib3 = fib2 + fib1;
		i++;
		printf("%ld", fib3);

		if (i <= 50)
			printf(", ");
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");

	return (0);
}
