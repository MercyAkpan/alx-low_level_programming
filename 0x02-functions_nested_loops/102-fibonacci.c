#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int n = 50;
	int i = 0;
	int f = 1;
	int g = 2;
	int c;

	printf("%d, %d, ", f, g);
	for (i = 0; i < n; i++)
	{
		c = f + g;
		f = g;
		g = c;
		printf("%d, ", c);
	}
	printf("\n");
	return (0);
}
