#include "lists.h"

/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t n  = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
