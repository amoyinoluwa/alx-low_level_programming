#include "lists.h"

/**
 * pop_listint - deletes head node from linked list
 * @head: head node
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *curr;

	if (*head == NULL)
	{
		return (0);
	}

	curr = *head;
	data = curr->n;
	*head = curr->next;
	free(curr);
	return (data);
}
