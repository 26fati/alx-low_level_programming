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
	if (size == 0)
		return (NULL);
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}

