#include "lists.h"

/**
 * print_dlistint - prints all elements in linked list
 * @h: head of linked list
 * Return: total number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int total;
	const dlistint_t *iter;

	total = 0;
	iter = h;

	while (iter)
	{
		printf("%d\n", iter->n);
		total++;
		iter = iter->next;
	}
	return (total);
}
