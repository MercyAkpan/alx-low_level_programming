#include "main.h"
int _prime(int n, int a);
/**
  * is_prime_number - validate if number is a prime number or not.
  * @n: This is the inputted number
  * Return: This returns 0 if not prime or 1, if prime.
  */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}


/**
  *  _prime - This validates if n is prime or not
  * @n: This is the assessed number
  * @a: This counts as divisors of the number
  * Return: This returns 0 or 1, if not or if a prime number respectively.
  */
int _prime(int n, int a)
{
	if (n > 1)
	{
		if (n == a)
			return (1);
		if (n != a && n % a != 0)
			return (_prime(n, a + 1));
	}
	else
		return (0);
return (0);
}
