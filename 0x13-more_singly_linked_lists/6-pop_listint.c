#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the address of beginning of the list
 *
 * Return: the head node's data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	h = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = h;

	return (n);
}
