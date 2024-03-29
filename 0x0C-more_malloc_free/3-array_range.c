#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Array of integers
 * @min: Minimum
 * @max: Maximum
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *range;

	if (min > max)
		return (NULL);
	j = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		range[i] = j;
		j++;
	}
	return (range);
}

