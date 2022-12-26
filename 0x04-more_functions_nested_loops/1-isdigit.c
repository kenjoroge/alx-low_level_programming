#include "main.h"
/**
 * -isdigit - checks for a digit
 * @c: checks if c is a digit
 *Description: define if a character is a number
 * Returns: 1 yes or 0 no
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
