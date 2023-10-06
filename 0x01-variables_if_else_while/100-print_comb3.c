#include <stdio.h>
/**
  * main -ENTRY POINT
  * Return: 0 on SUCCESS
  */
int main(void)
{
	int k = '0', a = '0';

	while (k <= '9')
	{
		while (a <= '9')
		{
			if (!(k > a || k == a))
			{
				putchar(k);
				putchar(a);
				if (k == '8' && a == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a = '0';
		k++;
	}
	return (0);
}
