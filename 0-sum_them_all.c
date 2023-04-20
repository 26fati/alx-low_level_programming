#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 *
 * @n: the number of the arguments.
 *
 * Return: returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list myNumbers;
	int result = 0, i;

	va_start(myNumbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(myNumbers, int);
	}
	va_end(myNumbers);
	return (result);

}
