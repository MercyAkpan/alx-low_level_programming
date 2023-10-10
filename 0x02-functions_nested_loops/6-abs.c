#include "main.h"
/**
  * _abs -this prints absolute vslue of a number
  * @h: -this is the nuber inputted
  * Return: return value
  */
int _abs(int h)
{
	int result;

	if (h < 0)
	{
	result = (h * -1);
	return (result);
	}
	return (h);
}
