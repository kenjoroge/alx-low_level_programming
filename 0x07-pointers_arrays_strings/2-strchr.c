#include "main.h"
/**
 * *_strchr - locates a charcter in a string
 * @s: pointer to array
 * @c: charcter type
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);

		s++;
	}
	return (s + 1);
}
