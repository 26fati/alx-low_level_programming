#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: an integer input.
 *
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(' ');
		_putchar('#');
	}
	_putchar('\n');
}
