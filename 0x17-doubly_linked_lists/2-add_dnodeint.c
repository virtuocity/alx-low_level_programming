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
	dlistint_t *new = NULL;


	if (head == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		*head = new;
		return (new);
	}
}
