#include "main.h"
/**
 * binary_to_uint - a function that converts a binary,
 * number to an unsigned int.
 *
 * @b: a pointer.
 *
 * Return: returns the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != 0 || b[i] != 1)
			return (0);
		num = num * 2 + (b[i] - '0');
		i++;
	}
	return (num);
}
