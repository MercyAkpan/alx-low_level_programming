#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - This prints sum of diagonals in a matrix
  * @a: This is the pointer to the matrix .
  * @size: This is the (offset) number of the columns in the array.
 */
void print_diagsums(int *a, int size)
{
	int max = size * size, i, msum = 0, asum = 0;

	for (i = 0; i <= max - 1; i += (1 + size))
	{
	/* should i put an if here ,to break the loop if at 2nd to last*/
		msum += *(a + i);
	}
	for (i = max - 1; i > 0; i -= (-1 + size))
	{
		if ((i + 1) == max)
			continue;
		/*else*/
			asum += *(a + i);
	}
	printf("%d, %d\n", msum, asum);
}
