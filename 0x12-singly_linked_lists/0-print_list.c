#include "lists.h"
/**
  * print_list - This functions lists the elements in a linked list.
  * @h: This the linked list to be scanned
  * Return: This returns the number of nodes in the linked list
  */
size_t print_list(const list_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
