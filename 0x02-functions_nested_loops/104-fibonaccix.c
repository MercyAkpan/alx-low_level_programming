#include <stdio.h>
#define MAX  100000000000
/**
  *
  *
  */
int main (void)
{
	unsigned long int f1 = 1, f2 = 2, carry1 = 0,carry2 = 0;
	unsigned long int tens, unit, all;
	int i;
	
	printf("%lu, %lu, ", f1, f2);
	for (i = 2; i < 98; i++)
	{
		if (f1 + f2 > MAX || carry1 > 0 || carry2 > 0)
		{
			tens = (f1 + f2) / MAX;
			unit = (f1 + f2) % MAX;
			all = f1 + f2 + tens;
			f1 = f2, f2 = all, carry2 = unit;
			printf("%lu%010lu", carry2, f2);
		}
		else 
		{
			unit = f1 + f2;
			f1 = f2, f2 = unit;
			printf("%lu", f2);
		}
		if (i != 97)
		{
			printf(", ");

		}
	}
	printf("\n");
	return (0);
}

