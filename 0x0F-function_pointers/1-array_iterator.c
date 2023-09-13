#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: Target array
 * @size: Size of the array
 * @action: executed function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
