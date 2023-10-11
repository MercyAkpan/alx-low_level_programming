#include <stdio.h>
/**
  * main -wntry
  * Return: 0
  */
int main(void)
{
	int i = 0;
	long int k = 1;
	long int m = 2;
	long int c;

	printf("%lu, %lu, ", k, m);
	for (i = 2; i < 98; i++)
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
