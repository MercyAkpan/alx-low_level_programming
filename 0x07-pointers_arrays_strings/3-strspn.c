#include "main.h"
/**
  *
  *
  *
  *
  */
unsigned int _strspn(char *s, char *accept)
/*NB:Return value is not a pointer/array so R-Value can be just a number*/
{
	int i, h, bytes = 0;

	for (; s[h] != '\0'; h++)
	{
		if (accept[i] != '\0')
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (s[h] == accept[i])
				{
					bytes++;
				}
				else
					continue;
			}
		}
		else if 
	}
	return (0);
}
