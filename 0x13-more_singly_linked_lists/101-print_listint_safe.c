#include "lists.h"
#include <stdio.h>

/**
 * ri - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **re(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);


}


/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
		}
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		list = re(list, count, head);
		head = head->next;

	}
	free(list);
	return (count);
}
