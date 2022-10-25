#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list
 * @head: a pointer to the head of the list
 * Return: number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	listint_t *h;

	h = *head;
	if (head == NULL || *head == NULL)
		exit(98);
	while (h != NULL)
	{
		printf("[%p] %d\n", &h, h->n);
		h = h->next;
		n++;
	}
	return (n);
	                             

}