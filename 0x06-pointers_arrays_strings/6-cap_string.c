#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @k: takes the input
 *
 * Return: Always 0
 */
char *cap_string(char *k)
{
	int i;

	i = 0;
	while (k[i] != '\0')
	{
		if (k[0] >= 97 && k[0] <= 122)
		{
			k[0] = k[0] - 32;
		}
		if (k[i] == ' ' || k[i] == '\t' || k[i] == '\n' || k[i] == ',' || k[i] == ';' || k[i] == '.' || k[i] == '!' || k[i] == '?' || k[i] == '"' ||k[i] == '(' || k[i] == ')' || k[i] == '{' || k[i] == '}')
		{
			if (k[i + 1] >= 97 && k[i = 1] <= 122)
			{
				k[i + 1] = k[i + 1] - 32;
			}
		}
		i++;
	}
	return (k);
}
