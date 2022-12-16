#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints possible combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;
	int hundreds;
	int tens;
	int ones;

	for (num = 0; num < 1000; num++)
	{
		hundreds = num / 100;
		tens = (num / 10) % 10;
		ones = num % 10;

		if (hundreds < tens && tens < ones)
		{
			putchar(hundreds + '0');
			putchar(tens + '0');
			putchar(ones + '0');

			if (num < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
