#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints sum of the even terms of fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1, fib2, fib3, i;

	fib1 = 0;
	fib2 = 0;
	fib3 = 1;
	i = 0;

	while (fib2 < 4000000)
	{
		fib2 = fib1 + fib3;
		fib1 = fib3;
		fib3 = fib2;

		if (fib2 % 2 == 0)
		{
			i += fib2;
		}
	}
	printf("%ld\n", i);

	return (0);
}
