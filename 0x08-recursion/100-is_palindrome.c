#include "main.h"
/**
  * palin - this is the 1st fn
  * @s: this is
  * Return: this returns string length
  *
  */
int palin(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + palin(s + 1));
}

/**
  * palind - this is the 2nd fn
  * @s: the string
  * @end: this is the ending of string
  * @start: beginning of function
  *Return: this returns an integer 0 or 1
 */
int palind(char *s, int end, int start)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + palind(s, end - 1, start + 1));
	}
	return (0);
}
/**
  * is_palindrome - this is the calling fn
  * @s: this is the string
  * Return: this reurns 1 or 0
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palind(s, palin(s) - 1, 0));
}
