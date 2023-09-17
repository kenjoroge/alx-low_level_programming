#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Memory allocation
 * @nmemb: Unsigned positive integer
 * @size: Unsighned integer size
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	call = malloc(j);
	if (call == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		call[i] = 0;
	}
	return (call);
}

