#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 *
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count  = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
