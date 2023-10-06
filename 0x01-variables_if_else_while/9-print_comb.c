#include <stdio.h>
/**
  * main -ENTRY POINT
  * Return: 0 on SUCCESS
  */
int main(void)
{
	int f;

	for (f = 48; f <= 57; f++)
	{
		if (f == 57)
		{
		putchar('\n');
		}
	putchar(f);
	putchar(44);
	putchar(32);
	}
	return (0);
}
