#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - performs operation asked by theuser
 * @s: string
 *
 * Return: Always 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (ops[i].op[0] == *s)
			return ((ops[i].f));
		i++;
	}
	return (NULL);
}
