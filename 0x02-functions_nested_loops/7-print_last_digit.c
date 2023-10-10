#include "main.h"
/**
  * print_last_digit - Thisprints last digit of a num ber
  * @d: number to be checke3d
  * Return: value of last digit
  */
int print_last_digit(int d)
{
	int j;

	j = d % 10;
	if (j < 0)
	{
		j = j * -1;
	}
	_putchar(j + '0');
	return (j);
}
