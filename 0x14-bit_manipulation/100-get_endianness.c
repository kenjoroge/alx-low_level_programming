#include "main.h"

/**
 * get_endianness - check for the endianness
 *
 * Return: Always 0
 */

int get_endianness(void)
{
	int i = 2;

	if (i & 1)
	{
		return (0);
	}

	return (1);
}
