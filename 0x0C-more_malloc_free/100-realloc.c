#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Main Entry
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *oldptr = ptr;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = new_size;
	for (i = 0; i < max; i++)
		p[i] = oldptr[i];
	free(ptr);
	return (p);
}
