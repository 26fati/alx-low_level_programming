#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array.
 * @c: character input.
 *
 * Return: returns a pointer of an array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || n == 0)
		return (0);
	while (i <= size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

