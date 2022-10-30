#include "lists.h"

/**
  *listint_len- print number of nodes in a SLL
  *
  *@h: pointer to headmof list
  *Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
