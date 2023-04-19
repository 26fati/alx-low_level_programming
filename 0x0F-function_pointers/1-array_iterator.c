#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function that gives,
 * as parameter on each element of an array.
 *
 * @array: array.
 * @size: size of array.
 * @action: function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
