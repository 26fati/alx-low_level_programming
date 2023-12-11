#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_helper(array, 0, size - 1, value));
}

/**
 * binary_search_helper - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @start: starting index in array
 * @end: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int start, int end, int value)
{
	int low, high, mid, i;

	if (array == NULL)
		return (-1);
	low = start;
	high = end;
	mid = low + (high - low) / 2;
	printf("Searching in array: ");
	for (i = start; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	if (array[low] == value)
		return (low);
	if (low < high)
	{
		if (array[mid] >= value)
			return (binary_search_helper(array, low, mid, value));
		else
			return (binary_search_helper(array, mid + 1, high, value));
	}
	else
		return (-1);
}
