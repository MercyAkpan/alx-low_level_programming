#include <stdio.h>
/**
  * main -wntry
  * Return: 0
  */
int main(void)
{
	int n = 98;
	int i = 0;
	unsigned long int k = 1;
	unsigned long int m = 2;
	unsigned long int c;

	printf("%lu, %lu, ", k, m);
	for (i = 0; i < 98; i++)
	{
		c = k + m;
		k = m;
		m = c;
		if (i == 97)
		{
			printf("%lu\n", c);
		}
		else
		{
			printf("%lu, ", c);
		}
	}
	return (0);
}
