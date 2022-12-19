#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: store the argument for s
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int j;
	char str[1000];

	i = 0;

	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}

	j = i -1;
	i = 0;

	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}
