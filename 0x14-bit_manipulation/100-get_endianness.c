#include "main.h"
/**
  * get_endianness - This gets.
  * Return: This return integer.
  */
int get_endianness(void)
{
	int dd = 1;
	int lend_or_bend;

	lend_or_bend = (int) ((char *)&dd)[0];
	return (lend_or_bend);
}
