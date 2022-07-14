#include "lists.h"

/**
 * list_len - initializes members of linked list struct
 * @h: pointer to struct
 * Return: number of elements in linked list
 */

size_t print_list(const list_t *h)
{
	int i;
	const list_t *head;

	i = 0;
	head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		i++;
		head =  head->next;
	}
	return (i);
}
