#include "lists.h"

/**
 * print_listint - prints all elements in a linked list
 * @h: head pointer
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *head;

	i = 0;
	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		i++;
		head =  head->next;
	}
	return (i);
}
