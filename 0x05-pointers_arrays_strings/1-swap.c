#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first pointer a
 * @b: the second pointer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;
	
	i = *a;
	*a = *b;
	*b = i;
}
