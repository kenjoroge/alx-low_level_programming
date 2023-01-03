#include "main.h"
/**
 * *_strpbrk - locates the first occurance of
 *  s in the string of any bytes in the string
 *  accept
 *  @s: pointer
 *  @accept: pointer
 *  Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (0);
}
