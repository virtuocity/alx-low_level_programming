#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to the first element of the list
 * @index: index of node
 * Return: no return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
