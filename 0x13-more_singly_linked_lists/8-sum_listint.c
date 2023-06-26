#include "lists.h"

/**
  *sum_listint - sum data in list
  *
  *@head: head node of list
  *Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
