#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - is a function that selects the correct function to perform the
 * operation asked by the user.
 * @s: operator to look for.
 * Return: a pointer.
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

	i = 4;
	while (i >= 0)
	{
		if (*ops[i].op == *s)
			return (*ops[i].f);
		i--;
	}
	return (NULL);
}
