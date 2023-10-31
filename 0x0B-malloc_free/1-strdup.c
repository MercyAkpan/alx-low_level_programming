#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *
  *
  *
  *
  */
char *_strdup(char *str)
{
	char *s;
	unsigned int length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	s = malloc(sizeof(char) * length);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
