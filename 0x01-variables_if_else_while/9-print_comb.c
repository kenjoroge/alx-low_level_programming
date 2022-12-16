#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints possible combinations of single digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
