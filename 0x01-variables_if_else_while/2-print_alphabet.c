#include <stdio.h>
/**
  * main - THIS IS THE STARTING POINT OF THE C PROGRAM
  * Return: Always 0 implies SUCCESS
  */
int main(void)
{
	char X = 'a';

	while (X <= 'z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
