#include "main.h"
/**
  * swap_int - this swap[s the varia bles using pointers
  * @a: 1st variable
  * @b: 2nd variable
  */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
