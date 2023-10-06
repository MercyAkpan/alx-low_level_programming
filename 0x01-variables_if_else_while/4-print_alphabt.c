#include <stdio.h>
/**
  * main -ENTRY POINT
  * Return: 0 on SUCCESS
  */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 113 || a == 101)
		{
		a++;
		continue;
		}
		else
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
	}
