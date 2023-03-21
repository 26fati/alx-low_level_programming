#include"main.h"
/**
 * print_sign - a function that prints sign of number
 *
 * @n: the input number as an integer.
 *
 * Return: 1 if it is positive. 0 if it is zero.
 * -1' if it is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
