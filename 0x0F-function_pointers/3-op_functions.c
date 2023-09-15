#include "3-calc.h"
/**
 * op_add - function for add
 * @a: operand
 * @b: also an operand
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function for subtraction
 * @a: operand
 * @b: also an operand
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function for multiplication
 * @a: operand
 * @b: also an operand
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -fuction for division
 * @a: operand
 *  @b: also an operand
 *
 *  Return: Division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder function
 * @a: operand
 * @b: operand
 *
 * Return: Modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
