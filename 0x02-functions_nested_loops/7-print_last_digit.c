#include"main.h"
/**
 * print_last_digit - a function that prints the last digit.
 *
 * @i: input number as an integer.
 *
 * Return: return the last digit.
 */
int print_last_digit(int i)
{
	int digit;

	digit = i % 10;
	if (digit < 0)
	{
		_putchar(-digit + 48);
		return (-digit);
	}
	else
	{
		_putchar(digit + 48);
		return (digit);
	}
}
