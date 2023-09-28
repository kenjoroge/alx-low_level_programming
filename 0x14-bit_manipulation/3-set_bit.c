#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
