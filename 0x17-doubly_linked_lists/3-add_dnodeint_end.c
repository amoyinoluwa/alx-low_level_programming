#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end of linked list
 * @head: first element in linked list
 * @n: integer argument
 * Return: address of new element or null if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	
	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}

	current->n = n;
	current->prev = NULL;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (*head);
	}
	else
	{
		dlistint_t *last;
		
		last = *head;

		while (last->next)
		{
			last = last->next;
		}
		last->next = current;
		current->prev = last;
	}
	return (current);
}
