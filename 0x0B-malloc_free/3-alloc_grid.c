#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * alloc_grid - This create an array of pointers to integers
  * @width: this is the column-size of the array of arrays
  * @height: This is the row-size of the  array of arrays
 * Return: This returns an integer value - The jth value
 */
int **alloc_grid(int width, int height)
{
	int **ppt, i, j, w = width, h = height;

	if (w <= 0 || h <= 0)
		return (NULL);
	ppt = malloc(sizeof(int *) * h);
	if (ppt == NULL)
		return (NULL);
	for (i = 0; i < w; i++)
	{
		ppt[i] = malloc(sizeof(int) * w);
		if (ppt[i] == NULL)
			for (; i >= 0; i--)
			{
				free(ppt[i]);
				free(ppt);
				return (NULL);
			}
	}
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			ppt[i][j] = 0;
	return (ppt);
	free(ppt);
}
