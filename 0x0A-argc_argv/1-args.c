#include <stdio.h>
/**
  * main - This is the main function
  * @argc: this is the argument length
  * @argv: this is unused
  * Return: this returns argument length from index 0.
  */
int main(int argc, char *argv[]  __attribute__((unused)))
{
	int count = 0, num = 0;

	if (argc > 0)
	{
	for (count = 0; count < argc; count++)
	{
		num = (0 + count);
	}
	printf("%d\n", num);
	}
	else
		return (0);
return (0);
}
