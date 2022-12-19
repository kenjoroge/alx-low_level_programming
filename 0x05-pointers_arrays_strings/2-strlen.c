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

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
