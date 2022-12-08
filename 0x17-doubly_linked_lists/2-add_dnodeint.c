#include "lists.h"

/**
  *add_dnodeint - add a node at beginning of
  * doubly linked list
  *
  *@head:head element
  *@n: data
  *Return: newnode
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->n = n;
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
