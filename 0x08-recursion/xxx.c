#include "main.h"
/**
  *
  *
  */

char * _palin(char *s)
{
	        if (*(s + 1) != '\0')
			                return (_palin(s + 1));
		        return (s);
}

