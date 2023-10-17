#include "main.h"
/**
  * rev_string - this reverses the string
  * @s: this is the pointer
  */
void rev_string(char *s)
{
	int g = 0, z, half;
	char per;

	for (; s[g] != '\0'; g++)
	{
		z = 0;
	}
	half = g / 2;

	while (half--)
	{
		per = s[g - z - 1];
		s[g - z - 1] = s[z];
		s[z] = per;
		z++;
	}
}
