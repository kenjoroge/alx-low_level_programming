#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals
 * @a: first value
 * @size: secomd value
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int sum = 0;
	int sum2 = 0;
	int l = 0;

	k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[1];
			if (j == k)
				sum2 += a[1];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sum, sum2);
}
