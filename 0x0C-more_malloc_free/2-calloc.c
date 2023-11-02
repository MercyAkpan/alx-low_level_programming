#include "main.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int * xxb;
	
	if (size == 0 || nmemb == 0)
		return (NULL);
	* xxb = malloc(size * nmemb);
	if (xxb == NULL)
		return (NULL);
	return (xxb);
}

