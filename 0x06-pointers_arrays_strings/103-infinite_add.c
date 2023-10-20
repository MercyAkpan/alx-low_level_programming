#include "main.h"
#include <stddef.h>
/**
  * infinite_add - This is the function
  * @n1: this variable
  * @n2: 2nd varia ble
  *@r: this is result
  *@size_r:  this  is buffer siize
  * Return: this returns results
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, s, k = 0, cr = 0, t, u;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (i >= size_r || j >= size_r)
/*Adds the numbers xter-wise.Index position n1 + n2 to be <= maxsize of reslt*/
		return (NULL);
	while (i >= 0 || j >= 0 || cr == 1)
	{
		if (i >= 0)
			t = n1[i] - '0';
		else
			t = 0;
		if (j >= 0)
			u = n2[j] - '0';
		else
			u = 0;
		s = t + u + cr;
		if (s >= 10)
			cr = 1;
		else
			cr = 0;
		if (k >= (size_r - 1))
			return (NULL);
		r[k] = (s % 10) + '0';
		k++;
		i--;
		j--;
	}
	if (k == size_r)
		return (NULL);
	r[k] = '\0';
	rev_string(r);
	return (r);
}
/**
  * rev_string - this reverses a string
  * @r: this is strmijg to be reversed
  */
void rev_string(char *r)
{
	int w = 0, b = 0, cage;

	while (r[w] != '\0')
	{
		w++;
	}
	w--;
	while (b < w)
	{
		cage = r[b];
		r[b] = r[w];
		r[w] = cage;
		b++;
		w--;
	}
}
