#include"main.h"
/**
 * _isdigit - a function that checks for a digit(0 through 9).
 *
 * @c: integer input.
 *
 * Return: return 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
