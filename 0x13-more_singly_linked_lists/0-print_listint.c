#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: a pointer to the head.
 *
 * Return: returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);

}
