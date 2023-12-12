#include "main.h"
#include <math.h>
/**
  *
  *
  *
  *
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, j = 0, i, g = 2, sum = 0;

	if (!b)
		return (0);

	while (*(b + j))
		j++;
	j--;
	for (i = 0; *(b + i) != '\0'; i++,j--)
	{
		/*if(*(b + i) == '0' || *(b + i) == '1')
		{
			a = ((2 ^ j) * (*(b + i)));
			sum += a;
		}*/
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		else 
		{	if (j == 0)
			g = 1;
			else
			{
				for (; j > 0; j--)
				{
					g *= 2;
				}
			}
			a = (g * (*(b + i)- '0'));
			sum += a;
		}
	}
	return (sum);
}
