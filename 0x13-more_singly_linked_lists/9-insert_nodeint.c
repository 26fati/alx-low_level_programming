#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *tmp, *ptr;

	tmp = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = tmp;
		*head = ptr;
		return (ptr);
	}
	else
	{
	for (node = 0; node < idx; node++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	ptr->next = tmp;
	tmp->next = ptr;
	}
	return (ptr);
}
