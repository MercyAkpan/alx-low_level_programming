#include "main.h"
/**
  *  _strspn - this gives length
  * @s: this is strinbg to be searched
  * @accept: this is allowed chacrters.
  *Return: length of bytes in 's' and 'accept'
  */
unsigned int _strspn(char *s, char *accept)
/*NB:Return value is not a pointer/array so R-Value can be just a number*/
{
	int i, h, bytes = 0;

	for (h = 0; ; h++)
	{
		for (i = 0; ; i++)
		{
			if (s[h] == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
