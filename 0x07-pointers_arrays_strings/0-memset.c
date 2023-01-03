#include "main.h"
/**
 * *_memset - fills first n bytes of the memory
 * pointed to by s with constant byte b
 * @s: is the pointer
 * @b: is the character data type
 * @n: is the unsigned integer
 * Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n = n - 1;
	}
	return (s);
}
