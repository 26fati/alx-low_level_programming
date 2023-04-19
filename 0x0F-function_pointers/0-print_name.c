#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  afunction that prints a name.
 *
 * @name: name.
 * @f: function.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
