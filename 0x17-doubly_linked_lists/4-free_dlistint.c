#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
