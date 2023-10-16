#include "main.h"
/**
  * puts2 - this is usede to print to the stdout
  * @str: this is the variable to be printed
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
