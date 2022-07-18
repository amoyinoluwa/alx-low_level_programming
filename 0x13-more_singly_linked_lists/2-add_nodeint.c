#include "lists.h"

/**
 * add_nodeint - adds node at beginning of linked list
 * @head: head of linked list
 * @n: node data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	current->n = n;
	current->next = *head;
	*head = current;
	return (*head);
}
