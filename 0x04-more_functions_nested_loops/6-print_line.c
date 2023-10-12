#include "main.h"
/**
  * print_line - print specified number of lines
  * @n: number of line blocks to be printed
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
