#include "main.h"
/**
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: Points to a string
 *
 * Return: Always 0
 */
char *leet(char *s)
{
	int sc, lt;
	char ll[] = "aAeEoOtTlL";
	char ln[] = "4433007711";

	sc = 0;
	while (s[sc] != '\0')
	{
		lt = 0;
		while (lt < 10)
		{
			if (ll[lt] == s[sc])
			{
				s[sc] == ln[lt];
			}
			lt++;
		}
		sc++;
	}
	return (s);
}
