#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *
  *
  */
int main(void)
{
	int passw[64], i, sum = 0, n;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		passw[i] = rand() % 78;
		sum += passw[i] + '0';
		putchar(passw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
