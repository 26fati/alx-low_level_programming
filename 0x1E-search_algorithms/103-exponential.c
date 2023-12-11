#include "search_algos.h"

/**
 * binary_search_2 - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @low: low of array
 * @high: high of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search_2(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);
	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	if (array[i] == value)
		return (i);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size && array[i] > value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
		return (binary_search_2(array, i / 2, i, value));
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	return (binary_search_2(array, i / 2, size - 1, value));
}
