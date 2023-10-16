#include "main.h"
/**
  *
  *
  *
  */
void rev_string(char *s)
{
	int g = 0;

	while (s[g])
	{
		g++;
	}
	while (g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
