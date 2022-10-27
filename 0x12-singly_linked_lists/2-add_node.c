#include "lists.h"

/**
 * add_node - add a new node to the beginning of a SLL
 * @head: Address of first element of the list
 *@str: string to be put in the new node
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{

	struct list_s *temp = NULL;
	int i;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);

}
