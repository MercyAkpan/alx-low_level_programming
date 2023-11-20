#include "lists.h"
#include <stdlib.h>
#include <string.h>
unsigned int len(const char *str);
/**
  * add_node - This adds a mode to the head of the list.
  * @head: - This is a double pointer to the head of list
  * @str: This is steing to be inputted in new node.
  * Return: This returns the new head of the list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
		newnode->next = NULL;
	else
			newnode->next = *head;
		newnode->str = strdup(str);
		newnode->len = len(str);
		*head = newnode;
	return (*head);
}
/**
  * len- This function returns the length of string.
  * @str: This is the passed string.
  * Return: This returns a +ve int or 0.
  */
unsigned int len(const char *str)
{
	unsigned int iter = 0;

	if (str == NULL)
		return (0);
	while (str[iter])
		iter++;
	return (iter);
}
