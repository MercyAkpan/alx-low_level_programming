#include "lists.h"
/**
  * listint_len - This list out elements present a linked list.
  * @h: This is  apointer to head of list.
  * Return: This returns the number of nodes present.
  */
size_t listint_len(const listint_t *h)
{
	int iter = 0;

	for (; h != NULL; iter++)
		h = h->next;
	return (iter);
}
