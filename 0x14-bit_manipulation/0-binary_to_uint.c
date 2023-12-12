#include "main.h"
/**
   * binary_to_uint - binary to dxeciml.
   * @b: Binary number to be passed
   * Return: returns ssize number.
   */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned long int i = 0, j = 0, sum = 0, power = 1, binary = 2;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			power = power * binary;
		sum = sum + (power * (b[i] - 48));
		length--;
		power = 1;
	}
	return (sum);
}
