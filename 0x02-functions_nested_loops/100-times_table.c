#include "main.h"
/**
  * print_times_table -times table
  * @n: variable
  */
void print_times_table(int n)
{
	int x, v, b;

	if ((n <= 15) && (n >= 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (v = 0; v <= n; v++)
			{
				b = x * v;
				if (b > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((b / 10) / 10) + '0');
					_putchar(((b / 10) % 10) + '0');
					_putchar((b % 10) + '0');
				}
				else if (b > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((b / 10) % 10) + '0');
					_putchar((b % 10) + '0');
				}
				else
				{
					if (v != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
						_putchar(b + '0');
				}
			}
			_putchar('\n');
		}
	}
}
