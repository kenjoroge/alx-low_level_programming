#include "variadic_functions.h"
/**
 * sum_them_all - sum
 * @n: opreand
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, j;
	unsigned int k;
	va_list args;

	i = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (k = 0; k < n; k++)
	{
		j = va_arg(args, int);
		i += j;
	}
	return (i);
}

