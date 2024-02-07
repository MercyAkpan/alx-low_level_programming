#include "hash_tables.h"
/**
  *
  *
  *
  *
  *
  *
  */
 char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int iter;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	iter = key_index((const unsigned char *)key, ht->size);
	if (iter >= ht->size)
		return (NULL);
	ptr = ht->array[iter];
	while(ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;

	return((ptr == NULL) ? NULL : ptr->value);
}
