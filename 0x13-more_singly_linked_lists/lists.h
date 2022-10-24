#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int n);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
int sum_listint(listint_t *);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);

#endif
