#include "main.h"
#include <stdlib.h>
/**
  *
  *
  *&
  *
  *
  */
  char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int jk = 0,length = 0, i = 0, j = 0, sum;
	char * xtr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	for (i = 0; s2[i] != '\0'; i++)
		jk++;
	sum = length + jk;
	xtr = malloc(sizeof(char) * (sum + 1));
	if(xtr == NULL)
	{
		free(xtr);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		xtr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		xtr[i] = s2[j];
	/*free(xtr);*/
	return (xtr);
}
