#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = dup;
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp == tmp->next;
		tmp->next = node;
	}
	return (*head);
}
