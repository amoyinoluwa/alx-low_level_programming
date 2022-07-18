#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at specified index
 * @head: first node in linked list
 * @idx: index to add new node
 * @n: data of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int i;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	current->n = n;
	node = *head;
	i = 0;
	if (idx == 0)
	{
		if (*head == NULL)
		{
			*head = current;
			return (*head);
		}
		else
		{
			current->next = *head;
			*head = current;
			return (*head);
		}
	}
	while (node && idx > 0)
	{
		if (i == idx - 1)
		{
			current->next = node->next;
			node->next = current;
			return (current);
		}
		i++;
		node = node->next;
	}
	free(current);
	return (NULL);
}
