#include "main.h"
/**
  * _puts - this prints to the standard output
  * @str: this the pointer that points to the variable
  */
void _puts(char *str)
{
	int ch = 0;

	while (str[ch])
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
