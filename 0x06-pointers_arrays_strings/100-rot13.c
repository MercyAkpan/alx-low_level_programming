#include "main.h"
/**
  * rot13 - this is an encryption function
  * @p: this is a pointer to the stringin mani function
  * Return: This returns the pointer p modified.
  */
char *rot13(char *p)
{
	int i = 0, j = 0, k;
	char b[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; p[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; j < 52; j++, k++)
		{
			if (p[i] == b[j])
			{
				p[i] = n[k];
				break;
			}
		}
	}
	return (p);
}
