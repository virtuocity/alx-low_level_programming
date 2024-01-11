#include "lists.h"
/**
  *free_dlistint - free a DLList
  *
  *@head: pointer to head
  *Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *temp2 = NULL;

	if (head == NULL)
		return;
	temp2 = head;
	while (temp2 != NULL)
	{
		/* temp pointer to traverse list */
		temp = temp2->next;
		free(temp2);
		temp2 = temp;
	}
	head = NULL;
}
