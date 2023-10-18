#include "main.h"
/**
  * _strncpy -This function copies a string into a nother.
  * @dest: This pointer accepts the other variable
  * @src: This is the variable to be copied
  * @n: this is the maximum amount of byte to be copied.
  * Return: This returns the dest pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
