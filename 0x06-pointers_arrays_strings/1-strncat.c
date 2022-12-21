#include "main.h"
/**
 * -strncat - concatenates two strings
 *  @dest: destination file
 *  @src: Source file
 *  @n: integer n
 *  Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	while (dest[len] != '\0')
	{
		len++
	}
	for (j = 0; j < n && src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
