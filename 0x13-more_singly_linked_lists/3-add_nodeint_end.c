#include "lists.h"
/**
  * add_nodeint_end - This adds a new node to the end of the list.
  * @head: This is the beginning of the linked list.
  * @n: This is the 'n' value of each node in the list. 'n' differs.
  *Return: This returns the head to the beginning of the linked list.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *add_node2;

	if (!head)
		return (NULL);
	add_node2 = malloc(sizeof(listint_t));
	if (add_node2 == NULL)
	{
		free(add_node2);
		return (NULL);
	}
	/*if (add_node2->str  == NULL)*/
	add_node2->n = n;
	add_node2->next = NULL;
	if (!*head)/*or (!head) instead */
	{
		*head = add_node2;
		return (*head);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = add_node2;
	return (*head);

}

