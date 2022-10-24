#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list and set th head to null.
 * @head: pointer to the beginning of the list
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *next, *h;

	h = *head;
	while (h != NULL)
	{
		next = h->next;
		free(h);
		h = next;
	}
	*head = NULL;
}
