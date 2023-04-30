#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp, *previous;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		tmp == NULL;
		return (1);
	}
	else
	{
		for (node = 0; node < index; index++)
		{
			if (tmp == NULL)
			{
				return (-1);
			}
			else
			{
				previous = tmp;
				tmp = tmp->next;
			}

		}
		previous->next = tmp->next;
		free(tmp);
		tmp = NULL;
		return (1);
	}

}
