#include "main.h"
/**
 * int _strlen - returns the length of a string
 *
 * @s takes the argument for the string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len <= 10; len++)
	{
		_putchar(len, *s);
	}
	_putchar('\n');
}
