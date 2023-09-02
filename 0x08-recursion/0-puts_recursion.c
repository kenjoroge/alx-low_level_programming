#include <main.h>
/*
 * _puts_recursion - functions that prints a string followed by a new line
 *
 * @s:Input string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	puts_recursion(s);
}
