#include "lists.h"
/**
  *
  *
  *
  */
size_t print_listint(const listint_t *h)
{
	size_t iter;

	for (iter = 1; h!= NULL; iter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (iter);
}
