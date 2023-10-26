#include "main.h"
/**
  * factorial - this prints out the factorial of an inputted number
  * @n: this is the inputted number
  * Return: this returns -1 or the factorial of the inputted number
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
