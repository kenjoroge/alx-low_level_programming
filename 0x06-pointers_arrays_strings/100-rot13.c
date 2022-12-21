#include "main.h"
/**
 * rot13 - Encodes a string
 * @s: Points to a string
 *
 * Return: Always 0
 */
char *rot13(char *s)
{
	int sc, i;
	char i1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L','M','N','O','P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};
	char i2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L','M'};
	
	for (sc = 0; s[sc] != '\0'; sc++)
	{
		for (i = 0; i < 53; i++)
		{
			if (i1[i] == s[sc])
			{
				s[sc] = i2[i];
				break;
			}
		}
	}
	return (s);
}
