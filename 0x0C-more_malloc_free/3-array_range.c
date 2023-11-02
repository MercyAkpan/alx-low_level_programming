#include "main.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  */
int *array_range(int min, int max)
{
	int p = 0, *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) *((max -min) + 1));
	if (ar == NULL)
		return (NULL);
	for (p = 0; min <= max; ++min)
	{
		ar[p] = min;
	}
	return (ar);
}
