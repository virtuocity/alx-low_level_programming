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
	struct listint_s *new = NULL;

	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

