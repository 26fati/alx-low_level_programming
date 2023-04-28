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
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);

}
