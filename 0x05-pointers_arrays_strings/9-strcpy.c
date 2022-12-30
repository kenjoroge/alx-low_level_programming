#include "main.h"
/**
 * _strcpy -copies the string pointed to by src
 *
 * @dest: destination file
 *
 * @src: source file
 *
 * Return: returns the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
