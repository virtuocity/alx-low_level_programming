#include "lists.h"
/**
  *add_nodeint_end - add node at end of SLL
  *
  *@head: head node
  *@n: data
  *Return: pointer to added node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *new = NULL;
	struct listint_s *temp = NULL;

	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
