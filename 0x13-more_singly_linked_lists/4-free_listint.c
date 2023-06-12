#include "lists.h"
/**
  *free_listint - free memory o=allocated to a singly linked list
  *
  *@head: head of linked list
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *reference = NULL;

	/**
	  *Need for a node pointer to store reference
	  * to next after freeing each node
	  */
	temp = head;
	while (head != NULL)
	{
		reference = temp->next;
		free(temp);
		temp = reference;
	}
	head = NULL;
}
