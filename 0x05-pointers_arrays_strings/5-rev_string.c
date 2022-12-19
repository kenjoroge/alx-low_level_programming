#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: store the argument for s
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int count = 0;
	int var;
	
	while (s[count] != '\0')
	{
		count++;
	}
	for (var = count; count > 0; var--)
	{
		_putchar(s[count]);
	}

}
