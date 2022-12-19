#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: takes the argument for the string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
