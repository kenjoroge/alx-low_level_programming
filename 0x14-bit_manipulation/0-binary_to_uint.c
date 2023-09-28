#include "main.h"

/**
* binary_to_uint - coonverts binary to unsiged integer
* @b: point to strings of chars
*
* Return: Always 0
*/

unsigned int binary_to_uint(const char *b)
{
	signed int i = 0, j = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		j <<= 1;

		if (b[i] & 1)
		{
			j += 1;
		}
		i += 1;
	}
	return (j);
}
