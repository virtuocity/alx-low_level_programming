#include "lists.h"

/**
 * pop_listint - delete the head node and return data in it
 * @head: head element of the list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int j;

	if (*head == NULL)
		return (0);
	temp = *head;
	j = temp->n;
	*head = temp->next;
	free(temp);

	return (j);
}

