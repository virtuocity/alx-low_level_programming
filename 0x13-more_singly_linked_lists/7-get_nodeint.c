#include "lists.h"
/**
  *get_nodeint_at_index - return nth node of list
  *
  *@head:head node
  *@index: index of node to be returned
  *Return: node at indeex
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
