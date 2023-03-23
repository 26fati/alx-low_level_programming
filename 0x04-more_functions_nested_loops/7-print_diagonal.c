#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: an integer input.
 *
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
}
