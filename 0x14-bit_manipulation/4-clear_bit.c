#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: int
 *
 * @index: int
 *
 * Return: Always 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}
