#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	int n;
	struct list_s *next;
} list_t;

/**
 * struct list_t - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 * Description: singly linked list of pointers
 */

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void free_list(list_t **head);
int pop_list(list_t **head);
list_t *get_nodeint_at_index(list_t *head, unsigned int index);
int sum_list(list_t *head);
list_t *insert_nodeint_at_index(list_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(list_t **head, unsigned int index);
list_t *reverse_list(list_t **head);
size_t print_list_safe(const list_t *head);
size_t free_list_safe(list_t **h);

#endif
