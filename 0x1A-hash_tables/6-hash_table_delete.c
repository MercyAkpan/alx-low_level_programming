#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *beg = ht;
	hash_node_t *ptr, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				temp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = temp;
			}
		}
	}
	free(beg->array);
	free(beg);
}
