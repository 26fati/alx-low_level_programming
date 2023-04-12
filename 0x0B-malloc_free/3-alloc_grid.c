#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: returns a pointer to a two dimensional array (success),
 * otherwise null.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(height * sizeof(*arr));

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

}
