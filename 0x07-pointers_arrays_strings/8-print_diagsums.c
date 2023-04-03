#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: a two dimensional array.
 * @size: size of the array.
 *
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + (*(a + i) + j);

		}
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (i == j)
				sum2 = sum2 + (*(a + i) + j);
		}
	}
	printf("%d %d\n", sum1, sum2);
}
