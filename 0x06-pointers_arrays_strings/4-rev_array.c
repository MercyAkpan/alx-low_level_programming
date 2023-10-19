#include "main.h"
/**
  * reverse_array - this swaps values in an array
  * @a: this is the variabkle to be swapped
  * @n: this is the array length
  */
void reverse_array(int *a, int n)
{
	int cage, i = 0;

	n = n - 1;
	for (; i <= n; i++, n--)
	{
		cage = a[i];
		a[i] = a[n];
		a[n] = cage;

	}
}
