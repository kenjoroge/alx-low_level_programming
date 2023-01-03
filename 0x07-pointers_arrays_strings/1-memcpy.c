#include "main.h"
/**
 * *_memcpy - copies n bytes from
 * memory area src to memory destination
 * @dest: destination file
 * @src: source file
 * @n: unsigned integer
 * Return: Destination file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}
	return (dest);
}
