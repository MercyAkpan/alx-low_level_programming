#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat -This concatenates two strings.
  * @s1: This is the 1st string.
  * @s2: This is the 2nd string.
  * @n: this is the maximu number of bytes of s2 taken.
  * Return: This returns a pointer to a character
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int jk = 0, length = 0, i = 0, j = 0, sum;
	char *xtr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	for (i = 0; s2[i] != '\0'; i++)
		jk++;
	if (jk > n)
		jk = n;
	sum = length + jk;
	xtr = malloc(sizeof(char) * (sum + 1));
	if (xtr == NULL)
	{
		free(xtr);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		xtr[i] = s1[i];
	for (j = 0;  j < jk && s2[j] != '\0'; i++, j++)
		xtr[i] = s2[j];
	xtr[i] = '\0';
	/*free(xtr);*/
	return (xtr);
}
