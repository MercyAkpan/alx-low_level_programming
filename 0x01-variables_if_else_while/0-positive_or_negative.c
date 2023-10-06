#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main  - This is the starting point of the C Program
  * Return: Always returns 0 to specify SUCCESS
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
	}
