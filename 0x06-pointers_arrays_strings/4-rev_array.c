#include "main.h"
/**
 * reverse_array - a function that reverses the content,
 * of an array of integers.
 *
 * @a: an array of integers.
 * @n: the number of elements of the array.
 *
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		int tmp = a[i];

		a[i] = a[n];
		a[n] = tmp;
	}

}
