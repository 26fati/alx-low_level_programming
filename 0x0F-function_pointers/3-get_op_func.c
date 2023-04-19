#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op_s[i].op != NULL)
	{
		if (strcmp(s, op_s[i].op) == 0)
			return (op_s[i].f);
		i++;
	}
	return (0);
}
