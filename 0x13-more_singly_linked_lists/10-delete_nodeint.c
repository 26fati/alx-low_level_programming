#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
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
		return (1);
	}
	else
	{
		for (node = 0; node < (index - 1); index++)
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
		return (1);
	}

}
