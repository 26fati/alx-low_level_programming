#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			head = ht->array[i];
			while (head)
			{
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				if (head != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
