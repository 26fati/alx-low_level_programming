#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: a pointer to the number.
 * @index: index.
 *
 *Return: returns 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	else
	{
		*n &= 1L << index;
	}
	return (1);
}
