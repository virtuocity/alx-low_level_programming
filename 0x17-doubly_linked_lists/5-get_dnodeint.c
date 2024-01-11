#include "lists.h"
/**
  *get_dnodeint_at_index - return node at index
  *
  *@head: pointer to dlist
  *@index: index of node
  *Return:node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return  (NULL);
	node = 0;
	while (head != NULL)
	{
		if (node == index)
			return (head);
		head = head->next;
		node++;
	}
	return (NULL);
}
