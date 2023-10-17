#include "main.h"
/**
  * _strcpy - this copies a string into another
  * @dest: - pointer
  * @src: -pointer2
  * Return - this returns the pointer to the variable
  */
char *_strcpy(char *dest, char *src)
{
	int y = -1;

	do {
		y++;
		dest[y] = src[y];
		} while (src[y] != '\0');

		return (dest);
}
