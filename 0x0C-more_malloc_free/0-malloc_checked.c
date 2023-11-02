#include "main.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *xtr = malloc(b);
	if (xtr == NULL)
		exit (98);
	return (xtr);
}
