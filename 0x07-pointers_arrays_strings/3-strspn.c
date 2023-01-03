#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
       	int j, i;
	unsigned int a = 0;

	i = 0;
	j = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
