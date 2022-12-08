#include "lists.h"

/**
  *sum_dlistint - sum of all data in dlistint_t
  *
  *@head: first element of dlistint_t
  *Return: sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
