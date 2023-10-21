#include "main.h"
#include <stdio.h>
/**
  *
  *
  *
  *
  */
void print_buffer(char *b, int size)
{
	int bi = 0, j = 0, u = 0, x, h;
	
	while (bi < size)
	{
		printf ("%08x:", bi);
		j = 0;
		if (size - bi < 10)
		{
			h = size - bi;
		}
		else 
			h = 10;
		while ((j < 10 && u % 10 != 0) || u == 0)
		{
			if (j < h)
			{
			u = bi + j;
			printf (" %02x", b[u]);
			/*j++;*/
			u += 1;
			printf ("%02x", b[u]); 
			j = j + 2;/* can I add j++ here, and make it a while loop*/
			}
			else
			{
				j = 10 - h;
				while (j > 0)
				{
					/*if (j = 1)
					printf("  ")
					else
					{*/
					if (h % 2 != 0)
					{
					printf("  ");
					h--;
					}
					if (h % 2 == 0)
					{
					printf(" ");
					printf("    ");
					j = j - 2;
					}
				}
				break;
			}
		}
		printf(" ");
		for (j = 0; j < h; j++)
		{
			x = *(b + bi + j);
			if (x >= 32 && x <= 132)
			{
			printf ("%c", x);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
		bi = bi + 10;
	}


}
