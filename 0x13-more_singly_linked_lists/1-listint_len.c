#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of link
 * Return: Count
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
