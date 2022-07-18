#include "lists.h"

/**
 * free_listint2 - frees up linked list
 * @head: head of linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node, *node;
	node = *head;

	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
