#include "lists.h"
#include <string.h>

/**
 * add_node - adds node to beginning of linked list
 * @str: string arg
 * @head: head of linked list
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	int length;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->str = strdup(str);
	length = 0;
	while(current->str[length] != '\0')
	{
		length++;
	}
	current->len = length;
	current->next = *head;
	*head = current;
	return (*head);
}
