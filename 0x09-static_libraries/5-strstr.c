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

	if (*needle == 0)
		return (haystack);

	for (;*haystack != '\0';)
	{
		i = 0;
		if (needle[j] == haystack[i])
		{
			do {
				if (needle[j + 1] ==  '\0')
					return (haystack);
				i++;
			} while (haystack);
			j++;
			continue;
			return (haystack);
		}
	}
	return (0);
	return (0);
}
