#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print nunber
 * @n: variable
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
		if (n == 98)
		{
		printf("%d\n", n);
		break;
		}
		printf("%d, ", n);
		}
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
		}
	}
}
