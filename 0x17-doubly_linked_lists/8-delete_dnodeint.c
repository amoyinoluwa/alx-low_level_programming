#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: head of linked list
 * @index: index to delete node
 * Return: 1 on success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);	
	if (index == 0 && *head)
		{
			temp = *head;
			*head = temp->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
	current = *head;
	i = 0;
	while (current && index > 0)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			if (temp->next)
				temp->next->prev = current;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (1);
}
