#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: Gives the argument for s
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n')
}
