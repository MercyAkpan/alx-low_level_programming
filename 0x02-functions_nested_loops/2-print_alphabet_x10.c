#include "main.h"
/**
  * print_alphabet_x10 -prints the alpahabet 10 times
  * Return:void
  */
void print_alphabet_x10(void)
{
char alph = 'a';
int s;

for (s = 1; s <= 10; s++)
{
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	alph = 'a';
	_putchar('\n');
}
}

