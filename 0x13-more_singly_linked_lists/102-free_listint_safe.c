#include "lists.h"
#include "stdio.h"

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size,
	const listint_t **new)
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
	newlist[i] = *new;
	free(list);
	return (newlist);


}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	const listint_t **list = NULL, *ptr;

	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, h);
		ptr = *h;
		*h = (*h)->next;
		free((void *)ptr);
	}
	free(list);
	return (num);
}
