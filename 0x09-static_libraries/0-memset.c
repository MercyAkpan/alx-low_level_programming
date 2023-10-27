#include "main.h"
#include <stdio.h>
/**
  * _memset - this sets an array element to a constant
  * @s: this is the array to be checked
  * @b: this is the constant
  * @n: this is the limited number of times to modify the array elements
  *Return: this points to the now modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;
	int y = 0;

	for (e = 0; e < n; e++)
	{
		s[y] = b;
	/*printf("%c", s[y]); - _memset doesn't print to the screen only deferencing*/
		y++;
	}
	return (s);
}
