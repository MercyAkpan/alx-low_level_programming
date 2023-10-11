#include <stdio.h>
/**
  * main -entry
  * Return: 0
  */
int main(void)
{
	int i = 0;
	long g = 1, h = 2, sum = h;

	while (g + h < 4000000)
	{
		h += g;
		if (h % 2 == 0)
			sum += h;
		g = h - g;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
