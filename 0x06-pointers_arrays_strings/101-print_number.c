#include "main.h"
/**
 * print_number -prints an integer
 * @n: prints the integer
 *
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		k = -n;
	}
	if (n < 10)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
