#include "main.h"
/**
  * print_rev - this prints the characters
  * @s: this is the pointer
  */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
