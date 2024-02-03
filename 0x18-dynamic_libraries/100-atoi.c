#include "main.h"
#include <stdio.h>
/**
  * _atoi - This is used to convert an string to an integer.
  * @s: This is the pointer to be converted from string to integer.
  * Return: This the integral value of the string.
  */
int _atoi(char *s)
{
	int i = 1;
	unsigned int result = 0;

		do {
		if (*s == '-')
		{
			i  *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		} while (*s++);
		return (result * i);
}
