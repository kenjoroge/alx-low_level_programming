#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates
 * @n: numbers
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && !i))
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}

