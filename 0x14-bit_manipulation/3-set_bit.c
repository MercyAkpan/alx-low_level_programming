#include "main.h"
/**
  *
  *
  *
  *
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	cover = 1;
	cover = cover << index;
	*n = ((*n) | cover);
	return (1);
}
  

