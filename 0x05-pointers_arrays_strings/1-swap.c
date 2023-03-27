#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a:the first integer input to be swapped.
 * @b:the second integer input to be swappes.
 *
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
