#include "main.h"
/**
 * print_bi - This converts binary to decimal.
 * @n: This is the nth variable.
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		putchar('1');
	if ((n & 1) == 0)
		putchar('0');
}

/**
  * print_binary - This converts decimal to binary.
  * @n: This is the nth variable
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
	{
		print_bi(n);
	}
}
