#include "main.h"
/**
  * set_string -to set a pointer to the varibale another pointer points to
  * @s: double pointer
  *@to: normal pointer
  */
void set_string(char **s, char *to)
{
	*s = to;
}
