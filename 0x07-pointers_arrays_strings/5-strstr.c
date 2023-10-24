#include "main.h"
/**
 * 
 *
  *
  *
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
			return (haystack);
	}
	return (haystack);
}
