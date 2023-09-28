#include "main.h"

/**
 * flip_bits - flips bits from one number to the other
 * @n: int
 * @m: int
 *
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}
