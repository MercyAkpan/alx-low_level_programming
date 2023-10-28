#include "main.h"
/**
  * _strncat - this joins strings with a limited number of bytes added
  * @dest: this is 1st string
  * @src: this is 2nd string
  * @n: most number of bytes possible to be added.
  * Return: this returns the dest pointer
  */
char *_strncat(char *dest, char *src, int n)
{
	int y, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	y = 0;
	for (; y < n && src[y] != '\0'; y++)
	{
		dest[i + y] = src[y];
	}
	dest[i + y] = '\0';
	return (dest);
}
