#include "main.h"
/**
 * _isdigit - fufunctions that verifies if a charcter is a digit
 * @c: tested charcter
 * Return: returns 1 if it is uppercase and 0 if not
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
