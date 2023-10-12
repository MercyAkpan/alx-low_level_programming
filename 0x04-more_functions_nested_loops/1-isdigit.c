#include "main.h"
/**
  * _isdigit -this is used tio check if c is a digit
  * @c: charcater to be checked
  * Return: 1 if a digit ,0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
