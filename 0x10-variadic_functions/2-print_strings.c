#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
