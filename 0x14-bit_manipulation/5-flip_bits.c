#include "main.h"
/**
  * flip_bits - This flip bits
  * @n: This is the nth.
  * @m: This
  * Return: This returns a size_t integer.
  *
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t output;
	       size_t counter;

	output = n ^ m;
	for (counter = 0; output > 0;)
	{
		if ((output & 1) == 1)
			++counter;
		output = output >> 1;
	}
	return (counter);
}

