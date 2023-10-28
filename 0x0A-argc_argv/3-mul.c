#include <stdio.h>
#include <stdlib.h>
/**
  * main -thisis the main  function
  * @argc: this is the length of argument = 3
  * @argv: this is the list of command-line argument passed..
  *Return: this returns multiplication of 2 integers or Error
  */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
