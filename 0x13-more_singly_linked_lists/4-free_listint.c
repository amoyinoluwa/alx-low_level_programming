#include "lists.h"

/**
 * free_list - frees up linked list
 * @head: head of linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
