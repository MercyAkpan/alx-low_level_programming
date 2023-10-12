#include "main.h"
/**
  *
  *
  *
  */
void print_triangle(int size)
{
	int row = 1, space, ash;

	if (size > 0 )
	{
		for (;row <= size; row++)
		{
			for (space = size - row; space > 0; space --)
			{
				_putchar(' ');
			}
			space = 
			for (ash = size - space; ash <= size; ash++)
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
