#include "lists.h"

/**
 * listint_len - a function that returns the number,
 * of elements in a linked listint_t list.
 *
 * @h: a pointer to the head of the linked list.
 *
 * Return:  returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
