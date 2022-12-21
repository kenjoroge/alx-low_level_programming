#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @i: points to a string
 *
 * Return: Always 0
 */
char *string_toupper(char *i)
{
	int k;

	k = 0;

	while (i[k] != '\0')
	{
		if (i[k] >= 97 && i[k] <= 122)
		{
			i[k] = i[k] - 32;
		}
		k++;
	}
	return (i);
}
