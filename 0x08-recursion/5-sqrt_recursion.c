#include "main.h"
/**
 * _sqrt - a function that returns the natural square root of a number.
 *
 * @n: integer input.
 * @i: an integer iterator.
 *
 * Return: return the square root of the number.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number using _sqrt function.
 *
 * @n: an integer input.
 *
 * Return: return square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
