#include "lists.h"

/**
 * *add_nodeint_end - a function that adds a new,
 * node at the end of a listint_t list.
 *
 * @head: a pointer to pointer to the head.
 * @n: integer to be added to the list.
 *
 * Return: returns the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->n = n;
		tmp->next = NULL;
	}
	if (*head == NULL)
		*head = tmp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;

		}
		ptr->next = tmp;
	}
	return (*head);
}
