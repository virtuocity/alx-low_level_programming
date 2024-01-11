#include "lists.h"
/**
  *dlistint_len - prints number of elements of dlistint_t list
  *
  *@h: pointer to list
  *Return: the number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int n;

	if (h == NULL)
		return (0);
	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
