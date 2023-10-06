#include <stdio.h>
/**
  * main -THIS IS THE STARTING POINT OF THE C PROGRAM
  * Return: ALWAYS 0 implies SUCCESS
  */
int main(void)
{
	int a;
	int b;

	a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	b = 65;
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
