#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first input string
 * @s2: Second input string
 * @n: greater then or equal to the lenght of s2
 *
 * Return: String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *newstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n > j)
		n = j;
	newstring = malloc(((i + n) + 1));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		newstring[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		newstring[i] = s2[j];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

