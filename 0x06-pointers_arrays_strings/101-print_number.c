#include "main.h"
/**
  *
  *
  *
  */
void print_number(int n)
{
	while (n >= 48 && n <= 57)
	{
		if (n < 0)
		{
			_putchar ('-');
		}
		if (n > 9)
		{
			_putchar ((n / 10) + '0');
			_putchar((n % 10 ) + '0');
		}
		else if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
		}
		else if(n > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10 ) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}
}
