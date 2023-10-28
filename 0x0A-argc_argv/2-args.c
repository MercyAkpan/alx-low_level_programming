#include <stdio.h>
/**
  * main - this is the main function
  * @argc: this is the argument length
  * @argv: this is the list of arguments
  * Return: this returns 0 on success.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
