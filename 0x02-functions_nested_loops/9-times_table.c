#include  "main.h"
/**
  * times_table - times table
  * Return:void
  */
void times_table(void)
{
	int m, n, o, s, t;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;
			if (o > 9)
			{
			s = o / 10;
			t = o % 10;
			_putchar(',');
			_putchar(' ');
			_putchar(s + '0');
			_putchar(t + '0');
			}
			else
			{
				if (n != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}

}
