#include "lists.h"

/**
 * free_list - frees up linked list
 * @head: head of linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
