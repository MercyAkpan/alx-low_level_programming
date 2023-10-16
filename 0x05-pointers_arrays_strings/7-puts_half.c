#include "main.h"
/**
  * puts_half - this is used to prijnt half the string.
  * @str: this is the st4ring
  */
void puts_half(char *str)
{
	int full, half;

	full = 0;
	while (str[full] != '\0')
	{
		full++;
	}
	if (full % 2 == 0)
	{
		half = full / 2;
	}
	else if (full % 2 == 1)
	{
		half = (full - 1) / 2;
		half++;
	}
	while (half < full)
	{
		_putchar (str[half]);
		half++;
	}
	_putchar('\n');
}
