#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 *
 * @str: an input.
 *
 * Return: no return.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
