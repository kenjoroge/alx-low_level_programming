#include "main.h"
/**
 * reverse_array -reverses the content of an array of integers
 * @a: points to the array
 * @n: shows the numbers of elements in an array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;
	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i
	}
}
