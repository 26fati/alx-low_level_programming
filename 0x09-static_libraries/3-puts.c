#include "main.h"
/**
 * _puts - a function that prints a string.
 *
 * @str: a string.
 *
 * Return: no return.
 */
void _puts(char *str)
{
	int i = 1;
	char s1 = str[0];

	while (s1 != '\0')
	{
		_putchar(s1);
		s1 = str[i++];
	}
	_putchar('\n');
}
