#include "main.h"
#include <stdlib.h>
/**
  * array_range - This creates a pointer to a integers (an array).
  * @min: This is the mim value.
  * @max:  This is the max value.
  * Return: This returns a pointer to an integer
  *
  */
int *array_range(int min, int max)
{
	int p = 0;
	int *ar;

	if (min > max)
		return (NULL);
	ar = calloc(((max - min) + 1), sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (p = 0; min <= max; p++, min++)
	{
		ar[p] = min;
	}
	return (ar);
}
