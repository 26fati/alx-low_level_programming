#include"main.h"
/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: an integer as an input.
 *
 * Return: returns 1 if c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
