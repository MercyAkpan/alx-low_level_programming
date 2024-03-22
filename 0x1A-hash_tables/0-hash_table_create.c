#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int iter;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
		ptr->array[iter] = NULL;

	return (ptr);
}