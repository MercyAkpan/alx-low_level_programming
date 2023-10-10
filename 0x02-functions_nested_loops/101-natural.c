#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/
int main(void)
{
	int a, sum = 0;

	while (a < 1024)
	{
		if((a % 3 == 0) || (a % 5 == 0))
		{
			 sum = sum + a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
