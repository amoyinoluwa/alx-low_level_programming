#include "lists.h"
/**
 * list_len - gets the number of elements in a linked list
 * @h: head of linked list
 * Return: num of elem in linked list
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *head;

	count = 0;
	head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
