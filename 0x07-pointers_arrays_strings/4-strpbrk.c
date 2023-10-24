#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - this returns first occurence of a pointer
  * @s: this is the pointer to be assessed
  * @accept: this is the 2nd pointer to compare with
  * Return: This returns the first occurnce or NULL.
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (s);
}
