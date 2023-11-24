#include "lists.h"
/**
  * add_nodeint -This add new nodes to the begining of a linke d list
  * @head: This is a double pointer to the head of the linked list.
  * @n: This is the 'n' value of the new node.
  * Return: Function returns pointer to head of list not double pointer
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg_node;

	beg_node = malloc(sizeof(listint_t));
	if (beg_node == NULL)
	{
		free(beg_node);
		return (NULL);
	}
	beg_node->n = n;
	beg_node->next = *head;
	*head = beg_node;
	return (*head);
}
