#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of the string.
 *
 * @s: a pointer to a string.
 *
 * Return: retur the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
