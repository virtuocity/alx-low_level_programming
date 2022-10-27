#include "lists.h"

/**
  *add_node_end- add a new node at end of list_t
  *
  *@head: pointer to first node
  *@str: a string , data in list_t
  *Return: pointer to node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Declare new node */
	struct list_s *new = NULL;
	/*Decare temp node */
	struct list_s *temp = NULL;
	int i;

	new = (struct list_s *)malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
