#include "main.h"
/**
  * print_sign -This function prints the sign of a number.
  * @n: this is the number to be checked
  * Return: 1 if positive ,-1 if negatice ;0 otherwise
  */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
