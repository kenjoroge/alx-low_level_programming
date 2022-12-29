#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer input
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = k;

	if (k < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (k > 9)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
