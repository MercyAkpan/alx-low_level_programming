#include "hash_tables.h"
/**
  * key_index- This returns the index of string in the has table.
  * @key: This is the string.
  * @size: This is the length of the array elements.
  * Return: It returns an index of the array.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int temp = hash_djb2(key);

	return (temp % size);
}
