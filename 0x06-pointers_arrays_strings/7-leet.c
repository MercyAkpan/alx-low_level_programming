#include "main.h"
/**
  * leet - this transliterates charcters
  * @p: this is the pointer that points to the sting.
  * Return: This returns the modified string.
  */
char *leet(char *p)
{
	int i = 0;
	char a[] = {"aAeEoOtTlL"};
	char m[] = {"4433007711"};
	int j, k = 0;

	for (; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++, k++)
		{
			if (p[i] == a[j])
			{
				p[i] = m[k];
				break;
			}
		}
		k = 0;
	}
	return (p);
}
