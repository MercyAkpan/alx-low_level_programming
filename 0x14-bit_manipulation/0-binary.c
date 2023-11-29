#include "main.h"
/**
  *
  *
  *
  *
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, total = 0,  weight = 1;
	int i;

	if (!b)
		return (0);
	while (*(b + j))
		j++;
/*	j--;*/
	for (i = j - 1; i >= 0; i--)
	{
		if (*(b + i) == '1')
			total += weight;
		else if (*(b + i) == '0')
			continue;
		if (*(b + i) != '0' && *(b + i) != '1')
		return (0);
		weight *= 2;
	}
	return (total);
}
