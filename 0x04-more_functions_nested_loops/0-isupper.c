#include "main.h"
/**
 * _isupper -checks for uppercase letters
 * @c: checks for character c
 *
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
