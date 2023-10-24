#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
  * _strchr - this returns from 1st occurenec of a letter
  * @s: this is the pointer to be assessed.
  * @c: this is the character to be matched
  * Return: this returns the 1st occurence onwards or NULL.
  */
char *_strchr(char *s, char c)
{
	unsigned int kk;

	for (kk = 0; s[kk] != '\0'; kk++)
	{
		if (s[kk] == c)
			return (s + kk);
		else if (s[kk] != c && s[kk + 1] == '\0')
			return (NULL);
	}
	return (NULL);
	printf("\n");
}
