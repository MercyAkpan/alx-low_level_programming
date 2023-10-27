#include "main.h"
/**
* _isalpha -THIS CHECKS IF A CHARCATER IS AN ALPABET
* @c: -This is the charcter to be checked
* Return: 1 is an alphabet  0 f otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

