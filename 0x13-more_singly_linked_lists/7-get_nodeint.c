#include "lists.h"

/**
 * get_nodeint_at_index - gets node at specified index
 * @head: head of linked list
 * @index: index of linked list
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

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
