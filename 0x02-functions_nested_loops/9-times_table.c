#include "main.h"
/**
 * times_table - prints time table starting with zero
 * r for  row, c for colum and i for digiits
 *
 * Return: Always 0
 */
void times_table(void)
{
	int r, c, i;
	
	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			i = (r * c);
			if (( i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
