#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *head;
	char *copied_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	copied_value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = copied_value;
			return (1);
		}
		head = head->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copied_value);
		return (0);
	}
	new->key = strdup(key);
	new->value = copied_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
