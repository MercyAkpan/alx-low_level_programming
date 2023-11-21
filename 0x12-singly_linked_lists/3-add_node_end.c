#include "lists.h"
#include <stdlib.h>
#include <string.h>
unsigned int length(const char *s);
/**
  * add_node_end -This fn adds a node to the end of list
  * @head: This is the double pointer to head of list
  * @str: This is the string to be dupilcated into node
  * Return: This returns the head of linked list (1st node)
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tempnode;
	list_t *addnode;

	if (!head)
		return (NULL);
	addnode = malloc(sizeof(list_t));
	addnode->str = strdup(str);
	addnode->len = length(str);
	addnode->next = NULL;
	if (!addnode)
	{
		return (NULL);
	}
	if (!*head)
		*head = addnode;
	else
	{
		tempnode = *head;
		while (tempnode->next)
			tempnode = tempnode->next;
	tempnode->next = addnode;
	}
	return (*head);
}
/**
  * length - This returns length of scanned string.
  * @s: This is string to be scanned
  * Return: Length of string or 0
  */
unsigned int length(const char *s)
{
	unsigned int iter = 0;

	if (s == NULL)
		return (0);
	while (s[iter])
		iter++;
	return (iter);
}
