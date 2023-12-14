#include "search_algos.h"
#include <math.h>


size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}


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
	size_t low, high, step;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	high = 0;
	while (high < size && value > array[high])
	{
		printf("value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high = high + step;
	}
	printf("value found between indexes [%ld] and [%ld]\n", low, high);
	for (; low <= min(high, size - 1); low++)
	{
		printf("value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);

}
