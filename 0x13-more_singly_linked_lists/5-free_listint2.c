#include "lists.h"

/**
 * free_listint2 - frees up linked list
 * @head: head of linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	*head = NULL;
}
