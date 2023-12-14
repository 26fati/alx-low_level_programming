#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	while (high < size && low <= high && pos < size)
	{
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		    * (value - array[low]));
	if (pos < size)
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		high = pos - 1;
	else
		low = pos + 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
