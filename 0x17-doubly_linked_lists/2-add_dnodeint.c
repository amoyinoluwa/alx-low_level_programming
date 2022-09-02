#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of linked list
 * @head: head of linked list
 * @n: node data
 * Return: head or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (*head);
}
