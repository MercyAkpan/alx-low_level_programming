#include "main.h"
/**
  * print_triangle - none
  * @size: none
  */
void print_triangle(int size)
{
	int row, space, ash;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			for (ash = 1; ash <= row; ash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
