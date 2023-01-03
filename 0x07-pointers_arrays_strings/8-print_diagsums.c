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
	int i, j, k, l;

	k = 0;
	l = 0;

	for (i = 0; i < size; i++)
	{
		k += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		l += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", k, l);
}
