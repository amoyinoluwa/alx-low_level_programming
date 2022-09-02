#include "lists.h"

/**
 * free_dlistint - frees up linked list
 * @head: head of linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
