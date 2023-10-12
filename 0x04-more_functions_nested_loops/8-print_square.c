#include "main.h"
/**
  * print_square - prijt numner of lines of a square
  * @size: this is dimjension of a square
  */
void print_square(int size)
{
	int i, ash, n = size;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (ash = 1; ash <= size; ash++)
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
