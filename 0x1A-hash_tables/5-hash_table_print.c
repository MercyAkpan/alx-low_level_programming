#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in order
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int iter;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (iter = 0; iter < ht->size; iter++)
	{
		if (ht->array[iter] != NULL)
		{
			if (flag == 1)
				printf(", ");
			ptr = ht->array[iter];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
