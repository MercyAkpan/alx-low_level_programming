#include "main.h"
/**
  *
  *
  *
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, y = 0;
	
	for (; i < n; i++,y++)
	{
		*(dest + i) = *(src + y);
	}
	return (dest);
}
