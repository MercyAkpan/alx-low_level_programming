#include "main.h"
/**
  * _memcpy - this copies an element
  * @dest: this is the array to be modified
  * @src: this is the array which will be copied
  * @n: this is maximum amount of elements to be copied
  * Return: this points to the array (dest) to be modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, y = 0;

	for (; i < n; i++, y++)
	{
		*(dest + i) = *(src + y);
	}
	return (dest);
}
