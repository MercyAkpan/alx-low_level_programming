#include "main.h"
/**
  * _strcat -Function join begining of one string to end of another string
  * @dest: this  points to the first string
  * @src: thbis points to the second string.
  * Return: the pointer dest.
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
