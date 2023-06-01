#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: The linked list
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
