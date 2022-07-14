#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the end of linked list
 * @head: first element in linked list
 * @str: string arg
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	int length;

	current = malloc(sizeof(list_t));
	
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}

	current->str = strdup(str);
	if (current->str == NULL)
	{
		free(current);
		return (NULL);
	}
	length = 0;

	while(current->str[length] != '\0') 
	{
		length++;
	}

	current->len = length;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		list_t *last;
		last = *head;
		while(last->next)
		{
			last = last->next;
		}
		last->next = current;
	}
	return (*head);
}
