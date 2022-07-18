#include "lists.h"

/**
 * sum_listint - sums all data of given linked list
 * @head: head of linked list
 * Return: sum of linked list data
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
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
