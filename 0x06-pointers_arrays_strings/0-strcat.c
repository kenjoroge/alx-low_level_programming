#include "main.h"
/**
 * _strcat - concatenates two strings
 * @k: points to destination
 * @i: points to source file
 *
 * Return: Always 0
 */
char *_strcat(char *k, char *i)
{
	int len, j;

	len = 0;
	while (k[len] != '\0')
	{
		len++;
	}
	for (j = 0; i[j] != '\0'; j++, len++)
	{
		k[len] = i[j];
	}
	k[len] = '\0';
	return (k);
}
