#include "hash_tables.h"
/**
  * hash_table_set - This is to create hash_nodes.
  * @ht: This is the current hashtable
  * @key: This is the key string to be found.
  * @value: This is the value associated with the key.
  * Return: Returns int.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *v_cpy;
	unsigned long int iter, iter2;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v_cpy = strdup(value);
	if (!v_cpy)
		return (0);
	iter = key_index((const unsigned char *)key, ht->size);
	for (iter2 = iter; ht->array[iter2]; ++iter2)
	{
		if (strcmp(ht->array[iter2]->key, key) == 0)
		{
			free(ht->array[iter2]->value);
			ht->array[iter2]->value = v_cpy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(v_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->value = v_cpy;
	new_node->next = ht->array[iter];
	ht->array[iter] = new_node;
	return (1);
}
