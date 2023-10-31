#include "main.h"
/**
  *
  *
  *
  *
  */
char *_strdup(char *str)
{
	char *s;
	unsigned int length, i;

	s = malloc(sizeof(char) * length);
	for (i = 0; str[i] != '\0'; i++)
		length++;
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
