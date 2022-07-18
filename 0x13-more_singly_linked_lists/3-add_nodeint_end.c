#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of linked list
 * @head: first element in linked list
 * @n: integer argument
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	
	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}

	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		listint_t *last;
		last = *head;

		while (last->next)
		{
			last = last->next;
		}
		last->next = current;
	}
	return (*head);
}
