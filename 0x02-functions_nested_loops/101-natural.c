#include <stdio.h>
/**
 * main - sums integers
 * Description: checks for all natura numbers
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);

	return (0);
}
