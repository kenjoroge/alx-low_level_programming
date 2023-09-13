#include "function_pointers.h"

/**
 * int_index - searches for aninteger
 * @array: Arraycontaining elements
 * @size: Number of elements in an aray
 * @cmp: function which compares values
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int index;
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (index = 0; a < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
