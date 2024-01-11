#include "lists.h"
/**
  *print_dlistint - prints all the elements of a dlistint_t list
  *
  *@h: pointer to list
  *Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	int n;

	if (h == NULL)
		return (0);
	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
