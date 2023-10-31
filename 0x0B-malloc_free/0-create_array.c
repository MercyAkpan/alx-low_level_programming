#include "main.h"
#include <stdlib.h>
/**
  * create_array - this is used to init every xter in an array to a given xter
  * @size: this is the max amount of bytes allocated
  * @c: this is the specified xter
  * Return: this returns the pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	char *ptt;
	unsigned int i;

	ptt = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (ptt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptt[i] = c;
	return (ptt);
	free(ptt);
}
