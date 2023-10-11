#include <stdio.h>
/**
  * main -wntry
  * Return: 0
  */
int main(void)
{
	unsigned long int i;
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int v, w, a, b;

	printf("%lu", num1);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", num2);
		num2 = num2 + num1;
		num1 = num2 - num1;
	}
	v = num1 / 1000000000;
	w = num1 % 1000000000;
	a = num2 / 1000000000;
	b = num2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(",%lu", a + (b / 1000000000));
		printf("%lu", b % 1000000000);
		a = a + v;
		v = a - v;
		b = b + w;
		w = b - w;
	}
	printf("\n");
	return (0);
}
