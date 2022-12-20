#include "main.h"
/**
 * jack_bauer - prints the time in 24hours
 *
 * @t: prints the time in hours
 * @s: prints the minutes instead of seconds
 * Return: Always 0
 */
void jack_bauer(void)
{
	int t;
	int s;

	for (t = 0; t < 24; t++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
