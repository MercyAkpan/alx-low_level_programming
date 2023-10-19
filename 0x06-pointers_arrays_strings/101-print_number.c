#include "main.h"
/**
  * print_number - this prints required number
  * @n: this is the number to be printed
  */
void print_number(int n)
{
		if (n < 0)
		{
			_putchar ('-');
			n = -n;
		}
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
		/**if (n > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
		}
		else if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
		}
		else if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}*/
}
