#include "lists.h"

/**
 * listint_len - gets length of linked list
 * @h: head pointer
 * Return: length n
 */

size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *head;

	count = 0;
	head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
