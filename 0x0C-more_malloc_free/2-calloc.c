#include "main.h"
#include <stdlib.h>
/**
  * _calloc - This creates memory for an array
  * @nmemb: This is the integral memeory spaces eg 10,34,98.
  * @size: This is sizeof, argument eg sizeof(char),(int)...
 * Return: THis returns a pointer to memeory allocated for an array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *xxb;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	xxb = malloc(size * nmemb);
	if (xxb == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		xxb[i] = 0;
	return (xxb);
}

