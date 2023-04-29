#include "lists.h"

/**
 * sum_listint - a function that returns the sum of,
 * all the data (n) of a listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: returns the sum of,
 * all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
