#include "main.h"
/**
 * _strcat - concatenates two string
 *
 * @dest: destination file
 *
 * @src: source file
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
