#include "main.h"
/**
  * get_bit - This gets bits
  *@n: This is the
  *@index: this the index
  *Return: This returns integer.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t iteration;

	if (index > sizeof(size_t) * 8)
	return (-1);
	for (iteration = 0; iteration < index; iteration++)
		n = n >> 1;
	return ((n & 1));
}

