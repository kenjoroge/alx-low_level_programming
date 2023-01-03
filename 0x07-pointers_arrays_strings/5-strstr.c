#include "main.h"
/**
 * *_strstr - finds first occcurence of the substring needle
 * in the string haystack
 * @haystack: pointer to character
 * @needle: the other pointer
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] == needle[i]; i++)
	{
		;
	if (!(needle[i]))
		return (haystack);
	}
	return (0);
}
