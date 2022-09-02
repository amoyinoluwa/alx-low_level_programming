#include "lists.h"

/**
 * get_nodeint_at_index - gets node at specified index
 * @head: head of linked list
 * @index: index of linked list
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = head;
	i = 0;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
