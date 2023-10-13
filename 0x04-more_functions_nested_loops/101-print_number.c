#include "main.h"
/**
  * print_number - this prints numbers
  * @n: variables
  */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		i = -i;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
