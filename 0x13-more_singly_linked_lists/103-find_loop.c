#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *q;

	if (head == NULL)
		return (NULL);
	for (q = head->next; q != NULL; q = q->next)
	{
		if (q == q->next)
			return (q);
		for (p = head; p != q; p = p->next)
		{
			if (p == q->next)
				return (q->next);
		}
	}
	return (NULL);

}
