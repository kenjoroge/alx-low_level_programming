#include "main.h"
/**
 * print_last_digit -prints last digit of a number
 *
 * @d: prints last digit
 *
 * Return: Always 0
 */
int print_last_digit(int d)
{
	int ld;

	ld = (d % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}


