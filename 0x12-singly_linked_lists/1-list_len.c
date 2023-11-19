#include "lists.h"
/**
  * list_len - This function gives the number of nodes in a linkedlist
  * @h: This is the linked list to be scanned
  * Return: This returns the number of nodes present in the linked list
  */
size_t list_len(const list_t *h)
{
	size iter;

	if (h == NULL)
		return (0);
	for (iter = 0; h->next != NULL; iter++)
	{
		h = h->next;
	}
		return (iter + 1);
}
