#include "lists.h"
#include <stdlib.h>
/**
  * free_list - This function frees allocated memory
  * @head: This is the pointer to head of the linked list
  * Return: This returns nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
	free(NULL);
}
