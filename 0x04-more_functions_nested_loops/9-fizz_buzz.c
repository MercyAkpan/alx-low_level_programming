#include <stdio.h>
/**
  * main -this is the C PROGRAM entry point
  * Return: 0 on success
  */
int main(void)
{
	int a = 1, h, j;

	for (; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		h = a / 10;
		j = a % 10;
		if (a > 9)
		{
			printf("%d", h);
		}
		printf("%d ", j);
	}
	return (0);
	}
