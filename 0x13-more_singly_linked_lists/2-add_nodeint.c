#include "lists.h"
/**
  *add_nodeint - add node at beginnning of SLL
  *
  *@head: head node of SLL
  *@n: data
  *Return: address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

