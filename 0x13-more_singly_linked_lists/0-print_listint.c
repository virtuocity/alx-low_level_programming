#include "lists.h"

/**
  *print_listint- print number of nodes in a SLL
  *
  *@h: pointer to headmof list
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int nodes;

	if (h == NULL)
		return 0;
	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
