#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @k: takes the input
 *
 * Return: Always 0
 */
char *cap_string(char *k)
{
	int i, j, l;

	char chars[] = {
		' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'
	};

	i = 32;

	for (j = 0; k[j] != '\0'; j++)
	{
		if (k[j] >= 'j' && k[j] <= 'z')
		{
			k[j] = k[j] - i;
		}
		i = 0;
		for (l = 0; chars[l] != '\0'; l++)
		{
			if (chars[l] == k[j])
			{
				i = 32;
				break;
			}
		}
	}
	return (k);
}
