#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - this prinmts the positions of a keyboard.
  * @a: This is a pointer
  */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c", a[j][i]);
		}
		printf("\n");
	}
}
