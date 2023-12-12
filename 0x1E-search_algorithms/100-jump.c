#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, i, step;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	low = 0;
	high = low + step;
	printf("value checked array[%ld] = [%d]\n", low, array[low]);
	while (high < size && value > array[high])
	{
		printf("value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high = high + step;
	}
	printf("value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i <= high && i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
