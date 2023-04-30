#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp;

	if (head == NULL)
		return (-1);
	else
	{
		tmp = *head;
		for (node = 0; node < index; index++)
		{
			if (tmp == NULL)
				return (-1);
			tmp = tmp->next;

		}
		ptr = tmp->next;
	}

}
