#include "lists.h"

/**
* delete_dnodeint_at_index - that deletes the node at index
* @head: variable pointer to pointer
* @index: index to delete
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == count)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);

		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
