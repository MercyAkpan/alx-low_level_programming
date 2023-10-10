#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int n = 50;
	int i = 2;
	long f = 1;
	long g = 2;
	long c;

	printf("%ld, %ld, ", f, g);
	while (i < n)
	{

		c = f + g;
		f = g;
		g = c;
		printf("%ld, ", c);
		i++;
	}
	printf("\n");
	return (0);
}
