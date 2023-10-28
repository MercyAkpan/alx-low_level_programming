#include "main.h"
int _nsqrt(int n, int a);
/**
  * _sqrt_recursion - This prints the natural square root of a number.
  * @n: This is the assessed number
  * Return: This returns the natural square root or -1
  */
int _sqrt_recursion(int n)
{
	return (_nsqrt(n, 1));
}

/**
  * _nsqrt - This returns the natural squre root of a number
  * @n: this is the number to be assessed
  * @a: This is the natural squre root of the number
  * Return: This the natural square root, else -1
  */
int _nsqrt(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_nsqrt(n, a + 1));
}
