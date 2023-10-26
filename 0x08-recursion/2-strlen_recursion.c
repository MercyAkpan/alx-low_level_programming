#include "main.h"
/**
  * _strlen_recursion - this outputs the number of charcters in a string.
  * @s: this is the string to be assessed
  * Return: this returns an integer
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
