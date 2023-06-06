#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node data
 * @head: pointer to the linked list
 * Return: num or 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
