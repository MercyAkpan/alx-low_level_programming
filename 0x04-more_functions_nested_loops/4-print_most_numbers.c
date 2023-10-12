#include "main.h"
/**
 * print_most_numbers - thois prinmts specified numbers
 */
void print_most_numbers(void)
{
	int f;

	f = 48;
	while (f <= 57)
	{
		if (!(f == 50 || f == 52))
		{
			_putchar(f);
		}
		f++;
	}
	_putchar('\n');
}
