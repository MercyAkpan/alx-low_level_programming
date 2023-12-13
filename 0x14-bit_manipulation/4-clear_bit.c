#include "main.h"
/**
  * clear_bit - This clears bit.
  * @n: This is the nth.
  * @index: This is the index.
  * Return: This returns integer.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	cover = 1;
	cover = cover << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = cover ^ *n;

	return (1);
}

