#include "main.h"
/**
 * puts_half - a function that prints a half of a string.
 *
 * @str: an input.
 *
 * Return: no return.
 */
void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length - 1) / 2;
	for (n = n + 1; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
