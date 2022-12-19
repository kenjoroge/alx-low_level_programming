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
	int count = 0;

	int len;

	for (len = 0; s[len]; len++)
	{
		if (s[len] != '\0')
			count += 1;
		else
			break;
	}
	return (count);
}
