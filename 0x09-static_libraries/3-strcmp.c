#include "main.h"
/**
  * _strcmp -This compares two strings
  * @s1: this is the first string.
  * @s2: This is the second string
  * Return: this returns the comparison of the two strings.
  */
int _strcmp(char *s1, char *s2)
{
	int comp, i = 0;

		while (s1[i] == s2[i] && s1[i] != '\0')
		{
			i++;
		}
		comp = (s1[i] - s2[i]) - '\0';
	return (comp);
}
