#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @ab: gives the integer value
 *
 * Return: Always 0
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
