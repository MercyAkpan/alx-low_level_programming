#include "main.h"
#include <string.h>
/**
  * _strlen - This reports the length of the variabl
  * @s: this is the variable to be checked
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
