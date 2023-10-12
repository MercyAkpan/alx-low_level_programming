#include "main.h"
/**
  * more_numbers - this is printing numbwers
  */
void more_numbers(void)
{
	int i = 1, f = 0;

	for (; i <= 10; i++)
	{
	for (; f <= 14; f++)
	{
		if (f >= 10)
		{
			_putchar((f / 10) + '0');
		}
		_putchar((f % 10) + '0');
	}
	_putchar('\n');
	f = 0;
	}
}

