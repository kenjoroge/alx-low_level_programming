#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	long int i;

	i = 612852475143;

	if (isPrime(i) == 1)
	{
		printf("%ld\n", i);
	}
	else
	{
		printf("%ld\n", biggestFactor(i));
	}
	return (0);
}

