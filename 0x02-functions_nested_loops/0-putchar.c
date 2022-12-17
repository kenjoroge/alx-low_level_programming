#include "main.h"
#include <stdio.h>

/**
 * main - prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	{
		void putchar(void)
		{
			char c = 'a';

			while (c <= 'z')
			{
				_putchar(c++);
			}
			_putchar('\n');
			return (0);
		}
	}

	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	Return (0);
}
