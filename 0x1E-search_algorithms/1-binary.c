#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;
	int i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
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
