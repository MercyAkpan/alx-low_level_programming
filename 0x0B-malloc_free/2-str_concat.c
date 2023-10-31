#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * str_concat - This concatenates two strings.
  * @s1: This is the 1st string
  * @s2: this is the second string
  *Return: this returns a concatenated string of two strings.
  */
char *str_concat(char *s1, char *s2)
{
	char *ptt;
	unsigned int k = 0, i, j = 0, length;

	for (i = 0; s1[i] != '\0'; i++)
		k++;
	for (i = 0; s2[i] != '\0'; i++)
		j++;
	length = k + j;

	ptt = malloc((sizeof(char) * length) + 1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";
	/**
	  *if (ptt == NULL)
	*	return (NULL);
	*/
	for (i = 0; s1[i] != '\0'; i++)
	ptt[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		ptt[i] = s2[j];
	return (ptt);
		free(ptt);
}
