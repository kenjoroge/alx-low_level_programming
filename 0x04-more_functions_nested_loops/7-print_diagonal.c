#include "main.h"
/**
 * Print_diagonal - entry point
 * Description: Prints diagonals
 * @n: number of lines
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int row, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (i = 1; i <= row - 1; i++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
