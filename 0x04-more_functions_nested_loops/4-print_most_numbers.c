#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9 in a new line each
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int number;
	for (number == 50; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
