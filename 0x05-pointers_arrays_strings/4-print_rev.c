#include "main.h"
/**
 * print_rev - a function that prints a string in reverse.
 *
 * @s: a string input.
 *
 * Return:  no return.
 */
void print_rev(char *s)
{
	int count = 0;
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		count++;
	}

	for (j = (count - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
