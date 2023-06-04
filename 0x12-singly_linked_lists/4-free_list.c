#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - free a list_t list
 * @head: The linked list
 * Return: No return
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
