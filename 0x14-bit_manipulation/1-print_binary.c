#include "main.h"
/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8, chars = 0;

	while (num)
	{
		if (n & 1L << --num)
			_putchar('1');
		else if (chars)
			_putchar('0');
	}
	if (!chars)
		_putchar('0');
}
