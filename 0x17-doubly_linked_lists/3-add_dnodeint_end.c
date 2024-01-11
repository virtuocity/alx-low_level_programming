#include "lists.h"
/**
  *add_dnodeint_end - add node at end of Dlist
  *
  *@head: pointer to dlist
  *@n: element to add
  *Return: new node added at end
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	return (new);
}
