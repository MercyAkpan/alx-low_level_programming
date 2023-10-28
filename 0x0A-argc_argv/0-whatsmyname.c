#include <stdio.h>
/**
  * main - this is the main function
  * @argc: this is thde argument count
  * @argv: tuis is the pointer tot he pointer to the string of arguments
 * Return: this returns 0 on success.
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
