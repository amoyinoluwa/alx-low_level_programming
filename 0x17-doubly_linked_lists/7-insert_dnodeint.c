#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at specified index
 * @h: first node in linked list
 * @idx: index to add new node
 * @n: data of new node
 * Return: ptr to current node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current;
	unsigned int i;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	current->n = n;
	current->next = NULL;
	current->prev = NULL;
	node = *h;
	i = 0;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			*h = current;
			return (*h);
		}
		else
		{
			current->next = *h;
			(*h)->prev = current;
			*h = current;
			return (*h);
		}
	}
	while (node && idx > 0)
	{
		if (i == idx - 1)
		{
			current->next = node->next;
			current->prev = node;
			if (node->next)
				node->next->prev = current;
			node->next = current;
			return (current);
		}
		i++;
		node = node->next;
	}
	free(current);
	return (NULL);
}
