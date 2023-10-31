#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *
  *
  *
  *
  *
  */
int **alloc_grid(int width, int height)
{
	int *ppt, i, j, w = width, h = height;
	
	if (w <= 0 || h <= 0)
		return (NULL);
	ppt = (int *)malloc(sizeof(int) * (w * h));
	if (ppt == NULL)
		return (NULL);
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
			*(*ppt)[i][j] = 0;
	}
	return (*ppt);
	free(ppt);
}
