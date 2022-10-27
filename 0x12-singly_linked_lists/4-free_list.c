#include "lists.h"

/**
  *free_list- free a singly linked list
  *
  *@head: pointer to head of SLL
  *Return: void
  */
void free_list(list_t *head)
{
	struct list_s *temp = NULL;
	struct list_s *aux =  NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp->str);
		free(temp);
		temp = aux;
	}
	head = NULL;
}
