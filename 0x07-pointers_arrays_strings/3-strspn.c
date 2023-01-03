#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!(accept[j]))
		{
			break;
		}
	}
	return (i);
}
