#include "lists.h"

/**
 * free_listint2 -  function sets the head to NULL
 * @head: head element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *alt =  NULL;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		alt = temp->next;
		free(temp);
		temp = alt;
	}
	*head = NULL;
}

