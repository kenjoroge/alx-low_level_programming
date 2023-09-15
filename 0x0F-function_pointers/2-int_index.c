#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for an int
 * @array: pointer
 * @size: int
 * @cmp: pointe
 *
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
