#include "lists.h"
/**
  * free_listint - This frees all present nodes in a linked lists.
  * @head: This is the head of the linked lists.
  * Return : NOTHING
  */
void free_listint(listint_t *head)
{
	listint_t *tempn;

	if (!head)
		return;
	while (head)
	{
		tempn = head;
		head = head->next;
		free(tempn);
	}

}
