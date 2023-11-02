#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - This checks a malloc
  * Return: This returns an exit code or pointer to memory allocated.
  * @b: This is the sample of mem allocated.
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *xtr;

	xtr = malloc(b);
	if (xtr == NULL)
		exit(98);
	return (xtr);
}
