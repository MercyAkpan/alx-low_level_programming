#include "lists.h"
/**
  * print_listint - This prints out the elements in a linked list.
  * @h: This is the head of the list.
  * Return: This returns the number of nodes present.
  */
size_t print_listint(const listint_t *h)
{
	size_t iter;

	for (iter = 0; h != NULL; iter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (iter);
}
