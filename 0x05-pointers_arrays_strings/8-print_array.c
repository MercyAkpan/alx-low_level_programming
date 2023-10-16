#include "main.h"
#include <stdio.h>
/**
  * print_array - this prints an array
  * @a: This is the variable
  * @n: This is the variable
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0' && i < n)
	{
		printf("%d", a[i]);
	if (i != 4)
	{
		putchar(',');
		putchar(' ');
	}
	i++;
	}
	putchar('\n');
}
