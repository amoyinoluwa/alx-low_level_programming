#include "lists.h"

/**
 * sum_dlistint - sums all data of given linked list
 * @head: head of linked list
 * Return: sum of linked list data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum;

	if (head == NULL)
		return (0);
	node = head;
	sum = 0;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
