#include "lists.h"
/**
  *add_dnodeint - add a node at head of Dlist
  *
  *@head: pointer to head of Dlist
  *@n: integer
  *Return: new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = *head;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = (*head)->prev;
		*head = new;
	}
	return (new);
}
