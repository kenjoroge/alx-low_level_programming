#include "main.h"
/**
 * print_alphabet_x10 -prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char letter;
	int x, o;
	
	while (x < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(x);
		}
		o++;
		_putchar('\n')
	}
}

