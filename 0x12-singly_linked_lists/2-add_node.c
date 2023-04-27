#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *node;

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
	node->next = *head;
	*head = node;
	return (node);

}
